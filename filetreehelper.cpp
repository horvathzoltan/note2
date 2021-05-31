#include "filetreehelper.h"

#include <QDirIterator>



QList<QTreeWidgetItem*> FileTreeHelper::Items(const QString &path)
{
    QList<QTreeWidgetItem*> a;
    QDirIterator it(path, QDirIterator::Subdirectories);

//    while(it.hasNext()) {
//        a.append(new QTreeWidgetItem({it.fileName()}));
//    }
    return a;
}
