#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>

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
};
#endif // INTERFACE_H
