/********************************************************************************
** Form generated from reading UI file 'rulesWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULESWINDOW_H
#define UI_RULESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(347, 299);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 291, 281));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "Blackjack Card Values:\n"
"You need to know the card values to know how\n"
"to play 21. Cards 2-10 are worth the value of\n"
"the number on the face of the card. Numbered\n"
"cards are worth the corresponding number\n"
"indicated on the card. Face cards (those with\n"
"pictures on them) are worth 10, except for\n"
"the Ace, which is worth 1 or 11. A picture\n"
"combined with an Ace is Blackjack (a value of 21).\n"
"\n"
"21 Card Game Explained:\n"
"The most important blackjack rule is simple:\n"
"beat the dealer\342\200\231s hand without going over 21.\n"
"If you get 21 points exactly on the deal,\n"
"that is called a \342\200\234blackjack.\342\200\235\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULESWINDOW_H
