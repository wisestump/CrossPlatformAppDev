#include "PixWidget.h"


  PixWidget::PixWidget(QWidget *pParent)
    : QWidget(pParent), R(250), r(100), d(50), theta(200), delta(0.01)
  { }

  void PixWidget::paintEvent(QPaintEvent *pEvent)
  {
    QPainter painter(this);

    painter.drawPixmap(0, 0, m_Pixmap);
  }

  void PixWidget::repaint()
  {
    int w = width(), h = height();
    QPixmap pixmap(w,h);
    QPainter painter(&pixmap);
    painter.setPen(QColor(255,255,0,255));

    for (float t = 0; t <= theta; t += delta)
    {
      float x = (R - r)*cos(t) + d * cos((R - r) / r * t);
      float y = (R - r)*sin(t) - d * sin((R - r) / r * t);
      painter.drawPoint(x + w / 2.f, y + h / 2.f);
    }

    m_Pixmap = pixmap;
  }

  void PixWidget::resizeEvent(QResizeEvent *pEvent)
  {
    repaint();
  }

  void PixWidget::setOuterR(float v) { R = v;repaint(); }
  void PixWidget::setInnerR(float v) { r = v;repaint(); }
  void PixWidget::setD(float v) { d = v;repaint(); }
  void PixWidget::setTheta(float v) { theta = v;repaint(); }
  void PixWidget::setDelta(float v) {delta = v;repaint();}
