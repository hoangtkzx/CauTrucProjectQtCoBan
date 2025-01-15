#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // Class QApplication chiu trach nhiem quan li vong doi cua ung dung GUI
    QApplication a(argc, argv);

    // Hien thi cua so chinh cua App
    Widget w;
    w.show(); // Goi phuong thuc nay de hien thi cua so

    // Vong lap su kien
    // Chiu trach nhiem nhan cac su kien ban phim, chuot, ...
    return a.exec();
}
