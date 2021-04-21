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
#include <QtWidgets/QGridLayout>
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
    QAction *Algorithm;
    QAction *More;
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
    QLineEdit *end_2_1;
    QLineEdit *end_2_2;
    QComboBox *hnSelect;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *MoreButton;
    QPushButton *GoButton;
    QGroupBox *groupBox_process;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *process_0_1;
    QLabel *process_0_0;
    QLabel *process_1_0;
    QLabel *process_2_0;
    QLabel *process_1_1;
    QLabel *process_1_2;
    QLabel *process_0_2;
    QLabel *process_2_1;
    QLabel *process_2_2;
    QLabel *StepLabel;
    QLabel *TimeLabel;
    QLabel *GnumLabel;
    QLabel *ExnumLabel;
    QMenuBar *menubar;
    QMenu *menuHELP;
    QMenu *menuConclusion;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setFixedSize(800, 530);
        Introduction = new QAction(MainWindow);
        Introduction->setObjectName(QString::fromUtf8("Introduction"));
        Usage = new QAction(MainWindow);
        Usage->setObjectName(QString::fromUtf8("Usage"));
        Algorithm = new QAction(MainWindow);
        Algorithm->setObjectName(QString::fromUtf8("A* Algorithm"));
        More = new QAction(MainWindow);
        More->setObjectName(QString::fromUtf8("More"));
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
        end_2_1 = new QLineEdit(groupBox_end);
        end_2_1->setObjectName(QString::fromUtf8("end_2_1"));
        end_2_1->setGeometry(QRect(70, 150, 51, 51));
        end_2_2 = new QLineEdit(groupBox_end);
        end_2_2->setObjectName(QString::fromUtf8("end_2_2"));
        end_2_2->setGeometry(QRect(130, 150, 51, 51));
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
        layoutWidget->setGeometry(QRect(550, 660, 82, 31));
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
        groupBox_process = new QGroupBox(centralwidget);
        groupBox_process->setObjectName(QString::fromUtf8("groupBox_process"));
        groupBox_process->setGeometry(QRect(170, 480, 201, 211));
        layoutWidget_2 = new QWidget(groupBox_process);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 30, 181, 171));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        process_0_1 = new QLabel(layoutWidget_2);
        process_0_1->setObjectName(QString::fromUtf8("process_0_1"));

        gridLayout->addWidget(process_0_1, 0, 1, 1, 1, Qt::AlignHCenter);

        process_0_0 = new QLabel(layoutWidget_2);
        process_0_0->setObjectName(QString::fromUtf8("process_0_0"));

        gridLayout->addWidget(process_0_0, 0, 0, 1, 1, Qt::AlignHCenter);

        process_1_0 = new QLabel(layoutWidget_2);
        process_1_0->setObjectName(QString::fromUtf8("process_1_0"));

        gridLayout->addWidget(process_1_0, 1, 0, 1, 1, Qt::AlignHCenter);

        process_2_0 = new QLabel(layoutWidget_2);
        process_2_0->setObjectName(QString::fromUtf8("process_2_0"));

        gridLayout->addWidget(process_2_0, 2, 0, 1, 1, Qt::AlignHCenter);

        process_1_1 = new QLabel(layoutWidget_2);
        process_1_1->setObjectName(QString::fromUtf8("process_1_1"));

        gridLayout->addWidget(process_1_1, 1, 1, 1, 1, Qt::AlignHCenter);

        process_1_2 = new QLabel(layoutWidget_2);
        process_1_2->setObjectName(QString::fromUtf8("process_1_2"));

        gridLayout->addWidget(process_1_2, 1, 2, 1, 1, Qt::AlignHCenter);

        process_0_2 = new QLabel(layoutWidget_2);
        process_0_2->setObjectName(QString::fromUtf8("process_0_2"));

        gridLayout->addWidget(process_0_2, 0, 2, 1, 1, Qt::AlignHCenter);

        process_2_1 = new QLabel(layoutWidget_2);
        process_2_1->setObjectName(QString::fromUtf8("process_2_1"));

        gridLayout->addWidget(process_2_1, 2, 1, 1, 1, Qt::AlignHCenter);

        process_2_2 = new QLabel(layoutWidget_2);
        process_2_2->setObjectName(QString::fromUtf8("process_2_2"));

        gridLayout->addWidget(process_2_2, 2, 2, 1, 1, Qt::AlignHCenter);

        StepLabel = new QLabel(centralwidget);
        StepLabel->setObjectName(QString::fromUtf8("StepLabel"));
        StepLabel->setGeometry(QRect(400, 530, 341, 16));
        TimeLabel = new QLabel(centralwidget);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));
        TimeLabel->setGeometry(QRect(400, 560, 341, 16));
        GnumLabel = new QLabel(centralwidget);
        GnumLabel->setObjectName(QString::fromUtf8("GnumLabel"));
        GnumLabel->setGeometry(QRect(400, 590, 331, 16));
        ExnumLabel = new QLabel(centralwidget);
        ExnumLabel->setObjectName(QString::fromUtf8("ExnumLabel"));
        ExnumLabel->setGeometry(QRect(400, 620, 341, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHELP = new QMenu(menubar);
        menuHELP->setObjectName(QString::fromUtf8("menuHELP"));
        menuConclusion = new QMenu(menubar);
        menuConclusion->setObjectName(QString::fromUtf8("menuConclusion"));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menuHELP->menuAction());
        menubar->addAction(menuConclusion->menuAction());
        menuHELP->addAction(Introduction);
        menuHELP->addAction(Usage);
        menuConclusion->addAction(Algorithm);
        menuConclusion->addAction(More);

        retranslateUi(MainWindow);

        QObject::connect(Introduction, SIGNAL(triggered(bool)), MainWindow, SLOT(IntroClicked()));
        QObject::connect(Usage, SIGNAL(triggered(bool)), MainWindow, SLOT(UsageClicked()));
        QObject::connect(More, SIGNAL(triggered(bool)), MainWindow, SLOT(MoreClicked()));
        QObject::connect(Algorithm, SIGNAL(triggered(bool)), MainWindow, SLOT(AlgoClicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "8-puzzle", nullptr));
        Introduction->setText(QApplication::translate("MainWindow", "What is an EightDigital game?", nullptr));
        Usage->setText(QApplication::translate("MainWindow", "How to use this program?", nullptr));
        Algorithm->setText(QApplication::translate("MainWindow", "A* algorithm", nullptr));
        More->setText(QApplication::translate("MainWindow", "More", nullptr));
        title->setText(QApplication::translate("MainWindow", "EIGHT PUZZLE", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_start->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Please input start state \350\257\267\350\276\223\345\205\245\350\265\267\345\247\213\347\212\266\346\200\201</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_start->setTitle(QApplication::translate("MainWindow", "   start \345\274\200\345\247\213\347\212\266\346\200\201", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_end->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Please input end state \350\257\267\350\276\223\345\205\245\347\273\210\346\255\242\347\212\266\346\200\201</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_end->setTitle(QApplication::translate("MainWindow", "   end \347\233\256\346\240\207\347\212\266\346\200\201", nullptr));
        hnSelect->setItemText(0, QApplication::translate("MainWindow", "not in the target location chess number", nullptr));
        hnSelect->setItemText(1, QApplication::translate("MainWindow", "Manhattan Distance", nullptr));
        hnSelect->setItemText(2, QApplication::translate("MainWindow", "Euclidean distance", nullptr));

#ifndef QT_NO_TOOLTIP
        hnSelect->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Please choose a h(n) function \350\257\267\351\200\211\346\213\251h(n)\345\207\275\346\225\260</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "h(n)\357\274\232", nullptr));
#ifndef QT_NO_TOOLTIP
        MoreButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>click here to show search tree</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        MoreButton->setText(QApplication::translate("MainWindow", "more", nullptr));
        GoButton->setText(QApplication::translate("MainWindow", "Go", nullptr));
#ifndef QT_NO_TOOLTIP
        groupBox_process->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>show moving process</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox_process->setTitle(QApplication::translate("MainWindow", "  process \350\277\207\347\250\213\346\274\224\347\244\272", nullptr));
        process_0_1->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_0_0->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_1_0->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_2_0->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_1_1->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_1_2->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_0_2->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_2_1->setText(QApplication::translate("MainWindow", "*", nullptr));
        process_2_2->setText(QApplication::translate("MainWindow", "*", nullptr));
        StepLabel->setText(QApplication::translate("MainWindow", "Total steps", nullptr));
        TimeLabel->setText(QApplication::translate("MainWindow", "Total time", nullptr));
        GnumLabel->setText(QApplication::translate("MainWindow", "Generate node number", nullptr));
        ExnumLabel->setText(QApplication::translate("MainWindow", "Extend node number", nullptr));
        menuHELP->setTitle(QApplication::translate("MainWindow", "HELP", nullptr));
        menuConclusion->setTitle(QApplication::translate("MainWindow", "Conclusion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
