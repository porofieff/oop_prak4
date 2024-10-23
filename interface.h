#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include "number.h"
#include "polinome.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Interface;
}
QT_END_NAMESPACE

class Interface : public QWidget
{
    Q_OBJECT

public:
    Interface(QWidget *parent = nullptr);
    ~Interface();

private:
    Ui::Interface *ui;
    void clear_face();

    int prev_butt = 0;
    number a_n;
    number x;
    Polinome polin;

public slots:
    void on_change_an_but_clicked();
    void on_enter_X_but_clicked();
    void on_enter_pol_but_clicked();
    void on_change_print_but_clicked();
    void on_change_len_but_clicked();
    void on_do_but_clicked();
};
#endif // INTERFACE_H
