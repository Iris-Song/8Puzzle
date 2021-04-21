/********************************************************************************
** Form generated from reading UI file 'detailwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILWINDOW_H
#define UI_DETAILWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detailwindow
{
public:
    QPushButton *backButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *title;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *detailwindow)
    {
        if (detailwindow->objectName().isEmpty())
            detailwindow->setObjectName(QString::fromUtf8("detailwindow"));
        detailwindow->resize(400, 306);
        backButton = new QPushButton(detailwindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 10, 61, 20));
        widget = new QWidget(detailwindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 391, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        title = new QLabel(widget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setStyleSheet(QString::fromUtf8("\n"
"font: 20pt \"Adobe Devanagari\";"));

        horizontalLayout->addWidget(title);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget->raise();
        backButton->raise();

        retranslateUi(detailwindow);

        QMetaObject::connectSlotsByName(detailwindow);
    } // setupUi

    void retranslateUi(QWidget *detailwindow)
    {
        detailwindow->setWindowTitle(QApplication::translate("detailwindow", "Form", nullptr));
        backButton->setText(QApplication::translate("detailwindow", "Back", nullptr));
        title->setText(QApplication::translate("detailwindow", "Search Tree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detailwindow: public Ui_detailwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILWINDOW_H
