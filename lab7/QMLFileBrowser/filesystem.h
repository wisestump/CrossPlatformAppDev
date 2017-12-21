#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QFileSystemModel>

class FileSystem : public QFileSystemModel
{
    Q_OBJECT
public:
    //Q_INVOKABLE bool isDir(const QModelIndex &index) const { return QFileSystemModel::isDir(index); }
    Q_INVOKABLE QModelIndex getIndex(int i);

};
#endif // FILESYSTEM_H
