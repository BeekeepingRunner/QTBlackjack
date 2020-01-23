/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->resize(430, 364);
        label = new QLabel(HelpWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 401, 361));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        retranslateUi(HelpWindow);

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpWindow)
    {
        HelpWindow->setWindowTitle(QApplication::translate("HelpWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("HelpWindow", "Blackjack Card Values:\n"
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
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
