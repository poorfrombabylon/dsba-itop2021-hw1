/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame_10;
    QLabel *label_7;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QFrame *frame_11;
    QFrame *frame_8;
    QLabel *label_6;
    QFrame *frame_4;
    QLabel *label_2;
    QFrame *frame_7;
    QLabel *label_5;
    QFrame *frame_6;
    QLabel *label_4;
    QFrame *frame_5;
    QLabel *label_3;
    QFrame *frame_2;
    QFrame *frame_9;
    QLabel *label;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(701, 407);
        gridLayout = new QGridLayout(AboutDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_10 = new QFrame(AboutDialog);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_10);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 10, 621, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Palatino"));
        font.setPointSize(16);
        font.setItalic(false);
        label_7->setFont(font);

        gridLayout->addWidget(frame_10, 2, 0, 1, 1);

        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setLayoutDirection(Qt::LeftToRight);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_3, 0, 1, 1, 1);

        frame_11 = new QFrame(frame);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setLayoutDirection(Qt::LeftToRight);
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_11, 0, 8, 1, 1);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setLayoutDirection(Qt::LeftToRight);
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 20, 16, 51));

        gridLayout_2->addWidget(frame_8, 0, 6, 1, 1);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setLayoutDirection(Qt::LeftToRight);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 16, 51));

        gridLayout_2->addWidget(frame_4, 0, 2, 1, 1);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setLayoutDirection(Qt::LeftToRight);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 16, 51));

        gridLayout_2->addWidget(frame_7, 0, 5, 1, 1);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setLayoutDirection(Qt::LeftToRight);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 20, 16, 51));

        gridLayout_2->addWidget(frame_6, 0, 4, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setLayoutDirection(Qt::LeftToRight);
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 20, 16, 51));

        gridLayout_2->addWidget(frame_5, 0, 3, 1, 1);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setLayoutDirection(Qt::LeftToRight);
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setLayoutDirection(Qt::LeftToRight);
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(frame_9, 0, 7, 1, 1);


        gridLayout->addWidget(frame, 1, 0, 1, 1);

        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(38);
        font1.setItalic(false);
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("AboutDialog", "This is a program which helps to work with \"Amazon books\" dataset by student \342\204\226104.", nullptr));
        label_6->setText(QCoreApplication::translate("AboutDialog", "S", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "B", nullptr));
        label_5->setText(QCoreApplication::translate("AboutDialog", "K", nullptr));
        label_4->setText(QCoreApplication::translate("AboutDialog", "O", nullptr));
        label_3->setText(QCoreApplication::translate("AboutDialog", "O", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "       Bestselling books on Amazon\302\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
