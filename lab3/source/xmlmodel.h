#ifndef XMLMODEL_H
#define XMLMODEL_H

#include <QAbstractItemModel>

class XmlModel : public QAbstractItemModel
{
  QModelIndex index(int row, int column, const QModelIndex &parent) const;
  QModelIndex parent(const QModelIndex &child) const;
  int rowCount(const QModelIndex &parent = QModelIndex()) const;
  int columnCount(const QModelIndex &parent = QModelIndex()) const;
  QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

#endif // XMLMODEL_H
