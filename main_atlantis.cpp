#include "main_atlantis.h"
#include "ui_main_atlantis.h"

#include <QFileDialog>
#include <QString>
#include <QMessageBox>

QtAtlantis::QtAtlantis(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtAtlantis),
    _game()
{
    ui->setupUi(this);
}

QtAtlantis::~QtAtlantis()
{
    delete ui;
}

void QtAtlantis::on_OglWidget_resized()
{

}
/** Open Atlantis File and read a Game */
void QtAtlantis::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
                                                    tr("Game File (*.in *.out);;All Files (*.*)"));

    if( !fileName.isEmpty() ) {
        if( !_game.OpenGame( fileName.toStdString() )) {
            QMessageBox::critical( this, tr("Error"), tr("Could not open file"));
            return;
        }
    }

    // Display nb of regions
    ARegionList regions = _game.regions;
    std::cout << regions.Num() << " hexagons " << std::endl;
    for (int i = 0; i < regions.numLevels; i++) {
        ARegionArray *pArr = regions.pRegionArrays[i];
        switch(pArr->levelType) {
            case ARegionArray::LEVEL_NEXUS:
                std::cout << AString("Level ") + i + ": Nexus";
                std::cout << " with " << pArr->x * pArr->y / 2 << " hex" << std::endl;
                break;
            case ARegionArray::LEVEL_SURFACE:
                std::cout << AString("Level ") + i + ": Surface";
                std::cout << " with " << pArr->x * pArr->y / 2 << " hex" << std::endl;
                break;
            case ARegionArray::LEVEL_UNDERWORLD:
                std::cout << AString("Level ") + i + ": Underworld";
                std::cout << " with " << pArr->x * pArr->y / 2 << " hex" << std::endl;
                break;
            case ARegionArray::LEVEL_UNDERDEEP:
                std::cout << AString("Level ") + i + ": Underdeep";
                std::cout << " with " << pArr->x * pArr->y / 2 << " hex" << std::endl;
                break;
        }
    }
}
void QtAtlantis::on_actionQuit_triggered()
{
    qApp->quit();
}

void QtAtlantis::on_map_widget_resized()
{

}


