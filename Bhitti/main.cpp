#include "login.h"
#include "neworder.h"
#include <QApplication>
#include "employeedash.h"
#include "trackorder.h"
#include "viewproduct.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    //w.show();
    //EmployeeDash emp1;
    //emp1.show();
    //NewOrder o1;
    //o1.show();
    //TrackOrder order;
    //order.show();
    ViewProduct product1;
    product1.show();
    return a.exec();
}
