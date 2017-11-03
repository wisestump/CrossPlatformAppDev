#include <QApplication>
#include <QPainter>
#include <QPixmap>
#include <QGraphicsView>
#include <QMainWindow>
#include <QGraphicsPixmapItem>

#include <cmath>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QMainWindow *win1 = new QMainWindow();
  win1->resize(500,500);
  win1->show();


  QGraphicsScene *scene = new QGraphicsScene(win1);
  QGraphicsView view(scene, win1);
  view.show();
  view.resize(500,500);

  QPixmap pix(500,500);

  QPainter *paint = new QPainter(&pix);
  paint->setPen(QColor(255,255,255,255));

  float R = 50, r = 30, d = 10;
  float theta = 200, delta = 0.5f;
  for (float t = 0; t <= theta; t += delta)
  {
    float x = (R - r)*cos(t) + d * cos((R - r) / r * t);
    float y = (R - r)*sin(t) - d * sin((R - r) / r * t);
    paint->drawPoint(x,y);
  }

  QGraphicsPixmapItem* item = scene->addPixmap(pix);
  item->setOffset(-300, 300);
  return a.exec();
}
