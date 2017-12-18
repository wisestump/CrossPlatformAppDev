#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkReply>

#include "requestfactory.h"
#include "committablemodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void replyFinished();
    void replyError(QNetworkReply::NetworkError code);

    void on_requestButton_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *netManager;
    RequestFactory requestFactory;
    QNetworkReply *reply;
    CommitDeserializer *deserializer;
    CommitTableModel *model;
};

#endif // MAINWINDOW_H
