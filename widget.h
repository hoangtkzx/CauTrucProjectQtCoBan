#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

// Class Widget ke thua QWidget
/*
QWidget la lop co so chiu trach nhiem cung cap chuc nang co ban nhu: hien thi, xu ly su kien, ...
*/
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui; // Tao ra con tro tro den giao dien tao boi file widget.ui 
};
#endif // WIDGET_H
