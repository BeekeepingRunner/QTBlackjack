/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *gameTitle;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *cardSlotsHorLayout;
    QVBoxLayout *userSlotVerLayout;
    QLabel *userCardSlotTitle;
    QLabel *userCardSlot;
    QHBoxLayout *horizontalLayout;
    QLabel *userPoints;
    QLabel *userPointsCounter;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *dealerSlotVerLayout;
    QLabel *dealerCardSlotTitle;
    QLabel *dealerCardSlot;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dealerPoints;
    QLabel *dealerPointsCounter;
    QLabel *turnLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *againButton;
    QPushButton *startButton;
    QSpacerItem *verticalSpacer;
    QLabel *resultLabel;
    QSpacerItem *verticalSpacer_2;
    QPushButton *hitButton;
    QPushButton *standButton;
    QPushButton *helpButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(590, 491);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gameTitle = new QLabel(centralwidget);
        gameTitle->setObjectName(QString::fromUtf8("gameTitle"));
        gameTitle->setGeometry(QRect(30, 10, 184, 65));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe Print"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        gameTitle->setFont(font);
        gameTitle->setFrameShadow(QFrame::Plain);
        gameTitle->setTextFormat(Qt::AutoText);
        gameTitle->setScaledContents(true);
        gameTitle->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 90, 371, 291));
        cardSlotsHorLayout = new QHBoxLayout(horizontalLayoutWidget);
        cardSlotsHorLayout->setObjectName(QString::fromUtf8("cardSlotsHorLayout"));
        cardSlotsHorLayout->setContentsMargins(0, 0, 0, 0);
        userSlotVerLayout = new QVBoxLayout();
        userSlotVerLayout->setObjectName(QString::fromUtf8("userSlotVerLayout"));
        userSlotVerLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        userCardSlotTitle = new QLabel(horizontalLayoutWidget);
        userCardSlotTitle->setObjectName(QString::fromUtf8("userCardSlotTitle"));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        userCardSlotTitle->setFont(font1);
        userCardSlotTitle->setAlignment(Qt::AlignCenter);

        userSlotVerLayout->addWidget(userCardSlotTitle);

        userCardSlot = new QLabel(horizontalLayoutWidget);
        userCardSlot->setObjectName(QString::fromUtf8("userCardSlot"));
        userCardSlot->setMaximumSize(QSize(150, 230));
        userCardSlot->setPixmap(QPixmap(QString::fromUtf8(":/cardImgs/green_back.png")));
        userCardSlot->setScaledContents(true);
        userCardSlot->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        userCardSlot->setWordWrap(false);
        userCardSlot->setOpenExternalLinks(false);

        userSlotVerLayout->addWidget(userCardSlot);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        userPoints = new QLabel(horizontalLayoutWidget);
        userPoints->setObjectName(QString::fromUtf8("userPoints"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        userPoints->setFont(font2);

        horizontalLayout->addWidget(userPoints);

        userPointsCounter = new QLabel(horizontalLayoutWidget);
        userPointsCounter->setObjectName(QString::fromUtf8("userPointsCounter"));
        userPointsCounter->setFont(font2);

        horizontalLayout->addWidget(userPointsCounter);


        userSlotVerLayout->addLayout(horizontalLayout);


        cardSlotsHorLayout->addLayout(userSlotVerLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        cardSlotsHorLayout->addItem(horizontalSpacer);

        dealerSlotVerLayout = new QVBoxLayout();
        dealerSlotVerLayout->setObjectName(QString::fromUtf8("dealerSlotVerLayout"));
        dealerSlotVerLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        dealerCardSlotTitle = new QLabel(horizontalLayoutWidget);
        dealerCardSlotTitle->setObjectName(QString::fromUtf8("dealerCardSlotTitle"));
        dealerCardSlotTitle->setFont(font1);
        dealerCardSlotTitle->setAlignment(Qt::AlignCenter);

        dealerSlotVerLayout->addWidget(dealerCardSlotTitle);

        dealerCardSlot = new QLabel(horizontalLayoutWidget);
        dealerCardSlot->setObjectName(QString::fromUtf8("dealerCardSlot"));
        dealerCardSlot->setMaximumSize(QSize(150, 230));
        dealerCardSlot->setPixmap(QPixmap(QString::fromUtf8(":/cardImgs/green_back.png")));
        dealerCardSlot->setScaledContents(true);
        dealerCardSlot->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dealerCardSlot->setWordWrap(false);
        dealerCardSlot->setOpenExternalLinks(false);

        dealerSlotVerLayout->addWidget(dealerCardSlot);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dealerPoints = new QLabel(horizontalLayoutWidget);
        dealerPoints->setObjectName(QString::fromUtf8("dealerPoints"));
        dealerPoints->setFont(font2);

        horizontalLayout_2->addWidget(dealerPoints);

        dealerPointsCounter = new QLabel(horizontalLayoutWidget);
        dealerPointsCounter->setObjectName(QString::fromUtf8("dealerPointsCounter"));
        dealerPointsCounter->setFont(font2);

        horizontalLayout_2->addWidget(dealerPointsCounter);


        dealerSlotVerLayout->addLayout(horizontalLayout_2);


        cardSlotsHorLayout->addLayout(dealerSlotVerLayout);

        turnLabel = new QLabel(centralwidget);
        turnLabel->setObjectName(QString::fromUtf8("turnLabel"));
        turnLabel->setGeometry(QRect(100, 390, 231, 61));
        turnLabel->setFont(font1);
        turnLabel->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(420, 90, 161, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(19);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(15, 5, 15, 0);
        againButton = new QLabel(verticalLayoutWidget);
        againButton->setObjectName(QString::fromUtf8("againButton"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        againButton->setFont(font3);
        againButton->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(againButton);

        startButton = new QPushButton(verticalLayoutWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setFont(font1);

        verticalLayout->addWidget(startButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        resultLabel = new QLabel(verticalLayoutWidget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setFont(font1);
        resultLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(resultLabel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        hitButton = new QPushButton(verticalLayoutWidget);
        hitButton->setObjectName(QString::fromUtf8("hitButton"));
        hitButton->setFont(font1);

        verticalLayout->addWidget(hitButton);

        standButton = new QPushButton(verticalLayoutWidget);
        standButton->setObjectName(QString::fromUtf8("standButton"));
        standButton->setFont(font1);

        verticalLayout->addWidget(standButton);

        helpButton = new QPushButton(centralwidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(450, 10, 101, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 590, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        gameTitle->setText(QApplication::translate("MainWindow", "BlackJack", nullptr));
        userCardSlotTitle->setText(QApplication::translate("MainWindow", "You", nullptr));
        userCardSlot->setText(QString());
        userPoints->setText(QApplication::translate("MainWindow", "Points:", nullptr));
        userPointsCounter->setText(QApplication::translate("MainWindow", "0", nullptr));
        dealerCardSlotTitle->setText(QApplication::translate("MainWindow", "Dealer", nullptr));
        dealerCardSlot->setText(QString());
        dealerPoints->setText(QApplication::translate("MainWindow", "Points:", nullptr));
        dealerPointsCounter->setText(QApplication::translate("MainWindow", "0", nullptr));
        turnLabel->setText(QApplication::translate("MainWindow", "... turn", nullptr));
        againButton->setText(QApplication::translate("MainWindow", "Click here to try again!", nullptr));
        startButton->setText(QApplication::translate("MainWindow", "START", nullptr));
        resultLabel->setText(QApplication::translate("MainWindow", "result", nullptr));
        hitButton->setText(QApplication::translate("MainWindow", "Hit", nullptr));
        standButton->setText(QApplication::translate("MainWindow", "Stand", nullptr));
        helpButton->setText(QApplication::translate("MainWindow", "What is going on?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
