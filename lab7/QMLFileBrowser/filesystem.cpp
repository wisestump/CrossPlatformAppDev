#include "filesystem.h"

QModelIndex FileSystem::getIndex(int i)
{
    QModelIndex index = this->index(i, 0);
    if (isDir(index))
       return index;

    return QModelIndex();
}
