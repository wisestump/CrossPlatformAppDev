#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QGraphicsView>
#include <QPainter>
#include <cmath>

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

private:
    void repaint();
    void initParameters();

    QGraphicsScene *scene;
    QGraphicsItem *pixmap = NULL;
    Ui::MainWindow *ui;

    float R, r, d;
    float theta, delta;
    float radiusEps;

    bool didInit = false;
};

#endif // MAINWINDOW_H
