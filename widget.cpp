#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget) // Tạo một đối tượng mới của lớp Ui::Widget (được tạo tự động từ file widget.ui).
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

