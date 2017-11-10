#ifndef PIXWIDGET_H
#define PIXWIDGET_H

#include <QPaintEvent>
#include <QWidget>
#include <QPainter>

class PixWidget : public QWidget
{
public:
  PixWidget(QWidget *pParent = 0);

  void setOuterR(float v);
  void setInnerR(float v);
  void setD(float v);
  void setTheta(float v);
  void setDelta(float v);

protected:
  void paintEvent(QPaintEvent *pEvent);
  void resizeEvent(QResizeEvent *pEvent);

private:
  QPixmap m_Pixmap;

  float R, r, d;
  float theta, delta;

  void repaint();
};

#endif //PIXWIDGET_H
