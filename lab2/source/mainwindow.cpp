#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pixWidget = new PixWidget(this);

    initParameters();
    radiusEps = 0.0001;

    setCentralWidget(pixWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initParameters()
{
    float R = 250, r = 120, d = 50,
    theta = 200, delta = 0.001f;

    ui->doubleSpinBoxOuterR->setValue(R);
    ui->doubleSpinBoxInnerR->setValue(r);
    ui->doubleSpinBoxInnerR->setRange(0, R - radiusEps);
    ui->doubleSpinBoxD->setValue(d);
    ui->doubleSpinBoxTheta->setValue(theta);
    ui->doubleSpinBoxDelta->setValue(delta);
}

void MainWindow::on_doubleSpinBoxOuterR_valueChanged(double arg1)
{
    pixWidget->setOuterR(arg1);
    ui->doubleSpinBoxInnerR->setRange(
      0,
      ui->doubleSpinBoxOuterR->maximum() - radiusEps);
}

void MainWindow::on_doubleSpinBoxInnerR_valueChanged(double arg1)
{
  pixWidget->setInnerR(arg1);
}

void MainWindow::on_doubleSpinBoxD_valueChanged(double arg1)
{
    pixWidget->setD(arg1);
}

void MainWindow::on_doubleSpinBoxTheta_valueChanged(double arg1)
{
    pixWidget->setTheta(arg1);
}

void MainWindow::on_doubleSpinBoxDelta_valueChanged(double arg1)
{
    pixWidget->setDelta(arg1);
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_actionInput_Data_triggered()
{
    ui->parametersDockWidget->show();
}

void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(this, "About", "This application renders so called hypotrochoids. These are the curves being drawn by spirographs.");
}
