#ifndef MAP_GLWIDGET_H
#define MAP_GLWIDGET_H

#include <QOpenGLWidget>

class MapGLWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    MapGLWidget(QWidget *parent) : QOpenGLWidget(parent)
    {}
};


#endif // MAP_GLWIDGET_H

