#include "main_atlantis.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QtAtlantis w;
    w.show();

    return app.exec();
}
