#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QPainter>
#include <QMessageBox>
#include <cmath>

#include "PixWidget.h"

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
    void on_doubleSpinBoxOuterR_valueChanged(double arg1);

    void on_doubleSpinBoxInnerR_valueChanged(double arg1);

    void on_doubleSpinBoxD_valueChanged(double arg1);

    void on_doubleSpinBoxTheta_valueChanged(double arg1);

    void on_doubleSpinBoxDelta_valueChanged(double arg1);

    void on_actionExit_triggered();

    void on_actionInput_Data_triggered();

    void on_actionAbout_triggered();

private:
    void repaint();
    void initParameters();

    PixWidget *pixWidget;
    Ui::MainWindow *ui;

    float radiusEps;

    bool didInit;
};

#endif // MAINWINDOW_H
