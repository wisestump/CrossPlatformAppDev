#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->tableView->horizontalHeader()->
    requestFactory = RequestFactory();

    netManager = new QNetworkAccessManager(this);
    deserializer = new CommitDeserializer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::replyFinished()
{
    //qDebug() << reply->readAll();
    QList<CommitInfo> commits = deserializer->deserializeCommits(QString(reply->readAll()));

    if (!model)
        delete model;

    model = new CommitTableModel(commits);
    ui->tableView->setModel(model);
}

void MainWindow::replyError(QNetworkReply::NetworkError code)
{
    qDebug() << code;
}

void MainWindow::on_requestButton_clicked()
{
    reply = netManager->get(requestFactory.getRequest(ui->urlLineEdit->text()));
    connect(reply, SIGNAL(readyRead()), this, SLOT(replyFinished()));
}
