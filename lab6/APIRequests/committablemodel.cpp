#include "committablemodel.h"
#include <QDebug>

QList<CommitInfo> CommitDeserializer::deserializeCommits(QByteArray commits)
{
    qDebug() << commits.count();
    QList<CommitInfo> result = QList<CommitInfo>();
    QJsonArray jsonResponse = QJsonDocument::fromJson(QString(commits).toUtf8()).array();
    qDebug() << jsonResponse.count();
    foreach (QJsonValue value, jsonResponse)
        result.append(this->deserilizeCommit(value.toObject()));

    return result;
}

CommitInfo CommitDeserializer::deserilizeCommit(QJsonObject object)
{
    CommitInfo result = CommitInfo();
    result.sha = object["sha"].toString();
    QJsonObject commit = object["commit"].toObject();
    QJsonObject author = commit["author"].toObject();
    result.author = author["name"].toString();
    result.email = author["email"].toString();
    result.date = author["date"].toString();
    result.message = commit["message"].toString();
    return result;
}

CommitTableModel::CommitTableModel(QList<CommitInfo> commits)
{
    this->commits = QList<CommitInfo>(commits);
}

CommitTableModel::~CommitTableModel()
{
}

int CommitTableModel::rowCount(const QModelIndex &) const
{
    return commits.count();
}

int CommitTableModel::columnCount(const QModelIndex &) const
{
    return CommitInfo::fieldsCount;
}

QVariant CommitTableModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
       return commits[index.row()][index.column()];
    }
    return QVariant();
}

QVariant CommitTableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section) {
            case 0:
                return "SHA";
            case 1:
                return "Message";
            case 2:
                return "Author";
            case 3:
                return "Email";
            case 4:
                return "Date";
            }
        }
    }
    return QVariant();
}

QVariant CommitInfo::operator[](int index) const
{
    switch (index) {
    case 0:
        return QVariant(sha);
    case 1:
        return message;
    case 2:
        return author;
    case 3:
        return email;
    case 4:
        return date;
    }
}
