#ifndef MAIN_ATLANTIS_H
#define MAIN_ATLANTIS_H

#include <QMainWindow>
#include <game.h>

namespace Ui {
class QtAtlantis;
}

class QtAtlantis : public QMainWindow
{
    Q_OBJECT

    /** Atlantis Game Object */


public:
    explicit QtAtlantis(QWidget *parent = 0);
    ~QtAtlantis();

private slots:
    void on_OglWidget_resized();

    void on_actionOpen_triggered();

    void on_map_widget_resized();

    void on_actionQuit_triggered();

private:
    Ui::QtAtlantis *ui;
    Game _game;
};

#endif // MAIN_ATLANTIS_H
