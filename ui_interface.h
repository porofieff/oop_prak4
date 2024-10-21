/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QLabel *x_label;
    QLineEdit *re_edit;
    QLineEdit *im_edit;
    QLabel *i_label;
    QPushButton *do_but;
    QLabel *an_label;
    QComboBox *eprint_box;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *result_line;
    QGridLayout *gridLayout;
    QPushButton *enter_X_but;
    QPushButton *change_len_but;
    QPushButton *change_an_but;
    QPushButton *change_print_but;
    QPushButton *enter_pol_but;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QLabel *size_label;
    QLineEdit *new_size_edit;

    void setupUi(QWidget *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(644, 469);
        x_label = new QLabel(Interface);
        x_label->setObjectName(QString::fromUtf8("x_label"));
        x_label->setGeometry(QRect(50, 70, 22, 18));
        re_edit = new QLineEdit(Interface);
        re_edit->setObjectName(QString::fromUtf8("re_edit"));
        re_edit->setGeometry(QRect(76, 70, 46, 26));
        im_edit = new QLineEdit(Interface);
        im_edit->setObjectName(QString::fromUtf8("im_edit"));
        im_edit->setGeometry(QRect(145, 70, 46, 26));
        i_label = new QLabel(Interface);
        i_label->setObjectName(QString::fromUtf8("i_label"));
        i_label->setGeometry(QRect(126, 70, 16, 18));
        do_but = new QPushButton(Interface);
        do_but->setObjectName(QString::fromUtf8("do_but"));
        do_but->setGeometry(QRect(30, 290, 581, 51));
        QFont font;
        font.setPointSize(30);
        do_but->setFont(font);
        do_but->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 4);\n"
"color: rgb(0, 0, 0);"));
        an_label = new QLabel(Interface);
        an_label->setObjectName(QString::fromUtf8("an_label"));
        an_label->setGeometry(QRect(50, 70, 22, 18));
        eprint_box = new QComboBox(Interface);
        eprint_box->addItem(QString());
        eprint_box->addItem(QString());
        eprint_box->setObjectName(QString::fromUtf8("eprint_box"));
        eprint_box->setGeometry(QRect(200, 60, 181, 41));
        widget = new QWidget(Interface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 350, 581, 81));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        result_line = new QLineEdit(widget);
        result_line->setObjectName(QString::fromUtf8("result_line"));
        result_line->setReadOnly(true);

        gridLayout_2->addWidget(result_line, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        enter_X_but = new QPushButton(widget);
        enter_X_but->setObjectName(QString::fromUtf8("enter_X_but"));

        gridLayout->addWidget(enter_X_but, 0, 1, 1, 1);

        change_len_but = new QPushButton(widget);
        change_len_but->setObjectName(QString::fromUtf8("change_len_but"));

        gridLayout->addWidget(change_len_but, 0, 4, 1, 1);

        change_an_but = new QPushButton(widget);
        change_an_but->setObjectName(QString::fromUtf8("change_an_but"));

        gridLayout->addWidget(change_an_but, 0, 0, 1, 1);

        change_print_but = new QPushButton(widget);
        change_print_but->setObjectName(QString::fromUtf8("change_print_but"));

        gridLayout->addWidget(change_print_but, 0, 3, 1, 1);

        enter_pol_but = new QPushButton(widget);
        enter_pol_but->setObjectName(QString::fromUtf8("enter_pol_but"));

        gridLayout->addWidget(enter_pol_but, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        widget1 = new QWidget(Interface);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(400, 60, 201, 41));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        size_label = new QLabel(widget1);
        size_label->setObjectName(QString::fromUtf8("size_label"));

        gridLayout_3->addWidget(size_label, 0, 0, 1, 1);

        new_size_edit = new QLineEdit(widget1);
        new_size_edit->setObjectName(QString::fromUtf8("new_size_edit"));

        gridLayout_3->addWidget(new_size_edit, 0, 1, 1, 1);


        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QWidget *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "Interface", nullptr));
        x_label->setText(QCoreApplication::translate("Interface", "X = ", nullptr));
        i_label->setText(QCoreApplication::translate("Interface", "+i", nullptr));
        do_but->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214!", nullptr));
        an_label->setText(QCoreApplication::translate("Interface", "a = ", nullptr));
        eprint_box->setItemText(0, QCoreApplication::translate("Interface", "\320\232\320\273\320\260\321\201\321\201\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));
        eprint_box->setItemText(1, QCoreApplication::translate("Interface", "\320\232\320\260\320\275\320\276\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));

        enter_X_but->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\276\320\264 \320\245", nullptr));
        change_len_but->setText(QCoreApplication::translate("Interface", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\200\320\260\320\267\320\274\320\265\321\200 ", nullptr));
        change_an_but->setText(QCoreApplication::translate("Interface", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 a_n", nullptr));
        change_print_but->setText(QCoreApplication::translate("Interface", "\320\222\321\213\320\262\320\276\320\264 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\260", nullptr));
        enter_pol_but->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\276\320\264 \320\277\320\276\320\273\320\270\320\275\320\276\320\274\320\260", nullptr));
        size_label->setText(QCoreApplication::translate("Interface", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\262\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
