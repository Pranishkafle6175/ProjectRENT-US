#include "signupwindow.h"
#include"categories.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignUpWindow w;
    Categories j;
    j.show();
    //w.show();
    return a.exec();
}
