#ifndef FILETREEHELPER_H
#define FILETREEHELPER_H

#include <QString>
#include <QTreeWidgetItem>

class FileTreeHelper
{
public:
    FileTreeHelper();

    static QList<QTreeWidgetItem*> Items(const QString& a);
};

#endif // FILETREEHELPER_H
