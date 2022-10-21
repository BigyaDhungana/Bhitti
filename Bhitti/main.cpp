#include "login.h"

#include <QApplication>
#include "employeedash.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    //w.show();
    EmployeeDash emp1;
    emp1.showMaximized();
    return a.exec();
}
