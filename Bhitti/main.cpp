#include "login.h"
#include "neworder.h"
#include <QApplication>
#include "employeedash.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    //w.show();
    //EmployeeDash emp1;
    //emp1.show();
    //NewOrder o1;
    //o1.show();
    return a.exec();
}
