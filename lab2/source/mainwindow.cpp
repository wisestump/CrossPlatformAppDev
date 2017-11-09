#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initParameters();
    radiusEps = 0.0001;

    scene = new QGraphicsScene(this);

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(ui->parametersDockWidget);
    QGraphicsView *view = new QGraphicsView(scene);
    layout->addWidget(view);

    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    setCentralWidget(widget);

    didInit = true;
    repaint();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::repaint()
{
    if (!didInit)
        return;

    if (pixmap)
        scene->removeItem(pixmap);

    int width = 500, height = 500;
    QPixmap pix(width, height);
    QPainter painter(&pix);
    painter.setPen(QColor(255,255,0,255));

    for (float t = 0; t <= theta; t += delta)
    {
      float x = (R - r)*cos(t) + d * cos((R - r) / r * t);
      float y = (R - r)*sin(t) - d * sin((R - r) / r * t);
      painter.drawPoint(x + width / 2.f, y + height / 2.f);
    }

    pixmap = scene->addPixmap(pix);
}

void MainWindow::initParameters()
{
    R = 50; r = 30; d = 10;
    theta = 200; delta = 0.3f;

    ui->doubleSpinBoxOuterR->setValue(R);
    ui->doubleSpinBoxInnerR->setValue(r);
    ui->doubleSpinBoxInnerR->setRange(0, R - radiusEps);
    ui->doubleSpinBoxD->setValue(d);
    ui->doubleSpinBoxTheta->setValue(theta);
    ui->doubleSpinBoxDelta->setValue(delta);
}

void MainWindow::on_doubleSpinBoxOuterR_valueChanged(double arg1)
{
    R = arg1;
    ui->doubleSpinBoxInnerR->setRange(0, R - radiusEps);
    repaint();
}

void MainWindow::on_doubleSpinBoxInnerR_valueChanged(double arg1)
{
    r = arg1;
    repaint();
}

void MainWindow::on_doubleSpinBoxD_valueChanged(double arg1)
{
    d = arg1;
    repaint();
}

void MainWindow::on_doubleSpinBoxTheta_valueChanged(double arg1)
{
    theta = arg1;
    repaint();
}

void MainWindow::on_doubleSpinBoxDelta_valueChanged(double arg1)
{
    delta = arg1;
    repaint();
}
