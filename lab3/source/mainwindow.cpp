#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    QTreeView *tree = new QTreeView(ui->mdiArea);
    tree->setModel(model);

    ui->mdiArea->addSubWindow(tree);
}

void MainWindow::on_actionOpen_triggered()
{
    QFileDialog::getOpenFileNames(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
