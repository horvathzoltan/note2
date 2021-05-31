#ifndef FILETREEHELPER_H
#define FILETREEHELPER_H

#include <QString>
#include <QTreeWidgetItem>

class FileTreeHelper
{
public:
    FileTreeHelper();

    static QList<QTreeWidgetItem*> Items(const QString& path);
    static void Dir(QList<QTreeWidgetItem*>* a, const QString& path, QTreeWidgetItem* parent);
};

#endif // FILETREEHELPER_H
