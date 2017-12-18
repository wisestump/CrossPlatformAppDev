#ifndef COMMITTABLEMODEL_H
#define COMMITTABLEMODEL_H

#include <QAbstractTableModel>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

struct CommitInfo
{
    QString sha;
    QString author;
    QString message;
    QString date;
    QString email;

    const static int fieldsCount = 5;
    QVariant operator[](int index) const;
};

class CommitDeserializer
{
public:
    QList<CommitInfo> deserializeCommits(QByteArray commits);
    CommitInfo deserilizeCommit(QJsonObject object);
};

class CommitTableModel : public QAbstractTableModel
{
public:
    CommitTableModel(QList<CommitInfo> commits);
    ~CommitTableModel();
    int rowCount(const QModelIndex &parent = QModelIndex()) const ;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QList<CommitInfo> commits;
};

#endif // COMMITTABLEMODEL_H
