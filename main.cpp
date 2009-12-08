#include <qapplication.h>
#include "CMD_GUI.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    CMD_GUI program;
    app.setMainWidget(&program); program.setFixedSize(458,444);
    program.show();    
    return app.exec();
}
