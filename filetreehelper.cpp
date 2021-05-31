#include "filetreehelper.h"

#include <QDirIterator>
#include <QDebug>
#include <QFileIconProvider>

QList<QTreeWidgetItem*> FileTreeHelper::Items(const QString &path)
{
    QList<QTreeWidgetItem*> a;
    Dir(&a, path, nullptr);
    return a;
}

void FileTreeHelper::Dir(QList<QTreeWidgetItem*>* a, const QString &path, QTreeWidgetItem* parent)
{
    QDirIterator it(path, QDir::AllEntries|QDir::NoDotAndDotDot);
    QFileIconProvider i;

    while(it.hasNext()) {
        auto fp = it.next();
        auto* p = new QTreeWidgetItem(parent, {it.fileName()});
        a->append(p);
        if(it.fileInfo().isDir()){
            p->setIcon(0, i.icon(QFileIconProvider::Folder));
            Dir(a, it.filePath(), p);
        }
        else if(it.fileInfo().isFile())
        {
            p->setIcon(0, i.icon(QFileIconProvider::File));
        }
    }
}
