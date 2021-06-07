#include "renderarea.h"
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent)
{

}

void RenderArea::paintEvent(QPaintEvent* event){

    QPainter painter(this);
    QColor color(255,250,200);
    painter.setBrush(color);

}

