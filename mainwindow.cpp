#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filetreehelper.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
      , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto items = FileTreeHelper::Items(QStringLiteral("/home/zoli/notes1"));

    ui->treeWidget->insertTopLevelItems(0, items);
}

MainWindow::~MainWindow()
{
    delete ui;
}

