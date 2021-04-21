/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *Introduction;
    QAction *Usage;
    QWidget *centralwidget;
    QLabel *title;
    QGroupBox *groupBox_start;
    QLineEdit *start_0_0;
    QLineEdit *start_0_1;
    QLineEdit *start_0_2;
    QLineEdit *start_1_0;
    QLineEdit *start_1_1;
    QLineEdit *start_1_2;
    QLineEdit *start_2_0;
    QLineEdit *start_2_1;
    QLineEdit *start_2_2;
    QGroupBox *groupBox_end;
    QLineEdit *end_0_0;
    QLineEdit *end_0_1;
    QLineEdit *end_0_2;
    QLineEdit *end_1_0;
    QLineEdit *end_1_1;
    QLineEdit *end_1_2;
    QLineEdit *end_2_0;
    QLineEdit *end_2_2;
    QLineEdit *end_2_1;
    QComboBox *hnSelect;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *MoreButton;
    QPushButton *GoButton;
    QMenuBar *menubar;
    QMenu *menuHELP;
    QMenu *menuContact;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 777);
        Introduction = new QAction(MainWindow);
        Introduction->setObjectName(QString::fromUtf8("Introduction"));
        Introduction->setCheckable(false);
        Usage = new QAction(MainWindow);
        Usage->setObjectName(QString::fromUtf8("Usage"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(220, 30, 381, 61));
        title->setStyleSheet(QString::fromUtf8("font: 28pt \"Adobe Devanagari\";"));
        groupBox_start = new QGroupBox(centralwidget);
        groupBox_start->setObjectName(QString::fromUtf8("groupBox_start"));
        groupBox_start->setGeometry(QRect(170, 130, 191, 211));
        start_0_0 = new QLineEdit(groupBox_start);
        start_0_0->setObjectName(QString::fromUtf8("start_0_0"));
        start_0_0->setGeometry(QRect(10, 30, 51, 51));
        start_0_1 = new QLineEdit(groupBox_start);
        start_0_1->setObjectName(QString::fromUtf8("start_0_1"));
        start_0_1->setGeometry(QRect(70, 30, 51, 51));
        start_0_2 = new QLineEdit(groupBox_start);
        start_0_2->setObjectName(QString::fromUtf8("start_0_2"));
        start_0_2->setGeometry(QRect(130, 30, 51, 51));
        start_1_0 = new QLineEdit(groupBox_start);
        start_1_0->setObjectName(QString::fromUtf8("start_1_0"));
        start_1_0->setGeometry(QRect(10, 90, 51, 51));
        start_1_1 = new QLineEdit(groupBox_start);
        start_1_1->setObjectName(QString::fromUtf8("start_1_1"));
        start_1_1->setGeometry(QRect(70, 90, 51, 51));
        start_1_2 = new QLineEdit(groupBox_start);
        start_1_2->setObjectName(QString::fromUtf8("start_1_2"));
        start_1_2->setGeometry(QRect(130, 90, 51, 51));
        start_2_0 = new QLineEdit(groupBox_start);
        start_2_0->setObjectName(QString::fromUtf8("start_2_0"));
        start_2_0->setGeometry(QRect(10, 150, 51, 51));
        start_2_1 = new QLineEdit(groupBox_start);
        start_2_1->setObjectName(QString::fromUtf8("start_2_1"));
        start_2_1->setGeometry(QRect(70, 150, 51, 51));
        start_2_2 = new QLineEdit(groupBox_start);
        start_2_2->setObjectName(QString::fromUtf8("start_2_2"));
        start_2_2->setGeometry(QRect(130, 150, 51, 51));
        groupBox_end = new QGroupBox(centralwidget);
        groupBox_end->setObjectName(QString::fromUtf8("groupBox_end"));
        groupBox_end->setGeometry(QRect(420, 130, 191, 211));
        groupBox_end->setStyleSheet(QString::fromUtf8(""));
        end_0_0 = new QLineEdit(groupBox_end);
        end_0_0->setObjectName(QString::fromUtf8("end_0_0"));
        end_0_0->setGeometry(QRect(10, 30, 51, 51));
        end_0_1 = new QLineEdit(groupBox_end);
        end_0_1->setObjectName(QString::fromUtf8("end_0_1"));
        end_0_1->setGeometry(QRect(70, 30, 51, 51));
        end_0_2 = new QLineEdit(groupBox_end);
        end_0_2->setObjectName(QString::fromUtf8("end_0_2"));
        end_0_2->setGeometry(QRect(130, 30, 51, 51));
        end_1_0 = new QLineEdit(groupBox_end);
        end_1_0->setObjectName(QString::fromUtf8("end_1_0"));
        end_1_0->setGeometry(QRect(10, 90, 51, 51));
        end_1_1 = new QLineEdit(groupBox_end);
        end_1_1->setObjectName(QString::fromUtf8("end_1_1"));
        end_1_1->setGeometry(QRect(70, 90, 51, 51));
        end_1_2 = new QLineEdit(groupBox_end);
        end_1_2->setObjectName(QString::fromUtf8("end_1_2"));
        end_1_2->setGeometry(QRect(130, 90, 51, 51));
        end_2_0 = new QLineEdit(groupBox_end);
        end_2_0->setObjectName(QString::fromUtf8("end_2_0"));
        end_2_0->setGeometry(QRect(10, 150, 51, 51));
        end_2_2 = new QLineEdit(groupBox_end);
        end_2_2->setObjectName(QString::fromUtf8("end_2_2"));
        end_2_2->setGeometry(QRect(70, 150, 51, 51));
        end_2_1 = new QLineEdit(groupBox_end);
        end_2_1->setObjectName(QString::fromUtf8("end_2_1"));
        end_2_1->setGeometry(QRect(130, 150, 51, 51));
        hnSelect = new QComboBox(centralwidget);
        hnSelect->addItem(QString());
        hnSelect->addItem(QString());
        hnSelect->addItem(QString());
        hnSelect->setObjectName(QString::fromUtf8("hnSelect"));
        hnSelect->setGeometry(QRect(220, 370, 361, 22));
        hnSelect->setEditable(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 370, 31, 20));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 640, 82, 31));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MoreButton = new QPushButton(layoutWidget);
        MoreButton->setObjectName(QString::fromUtf8("MoreButton"));

        verticalLayout->addWidget(MoreButton);

        GoButton = new QPushButton(centralwidget);
        GoButton->setObjectName(QString::fromUtf8("GoButton"));
        GoButton->setGeometry(QRect(360, 430, 91, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHELP = new QMenu(menubar);
        menuHELP->setObjectName(QString::fromUtf8("menuHELP"));
        menuContact = new QMenu(menubar);
        menuContact->setObjectName(QString::fromUtf8("menuContact"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuHELP->menuAction());
        menubar->addAction(menuContact->menuAction());
        menuHELP->addAction(Introduction);
        menuHELP->addAction(Usage);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Introduction->setText(QApplication::translate("MainWindow", "What is an EightDigital game?", nullptr));
        Usage->setText(QApplication::translate("MainWindow", "How to use this program?", nullptr));
        title->setText(QApplication::translate("MainWindow", "EIGHT PUZZLE \345\205\253\346\225\260\347\240\201", nullptr));
        groupBox_start->setTitle(QApplication::translate("MainWindow", "   start \345\274\200\345\247\213\347\212\266\346\200\201", nullptr));
        groupBox_end->setTitle(QApplication::translate("MainWindow", "   end \347\233\256\346\240\207\347\212\266\346\200\201", nullptr));
        hnSelect->setItemText(0, QApplication::translate("MainWindow", "not in the target location chess number", nullptr));
        hnSelect->setItemText(1, QApplication::translate("MainWindow", "Manhattan Distance", nullptr));
        hnSelect->setItemText(2, QApplication::translate("MainWindow", "Euclidean distance", nullptr));

        label->setText(QApplication::translate("MainWindow", "h(n)\357\274\232", nullptr));
        MoreButton->setText(QApplication::translate("MainWindow", "more", nullptr));
        GoButton->setText(QApplication::translate("MainWindow", "Go", nullptr));
        menuHELP->setTitle(QApplication::translate("MainWindow", "HELP", nullptr));
        menuContact->setTitle(QApplication::translate("MainWindow", "Contact", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
