/********************************************************************************
** Form generated from reading UI file 'editwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITWINDOW_H
#define UI_EDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_EditWindow
{
public:
    QGridLayout *gridLayout_6;
    QTableView *tableView;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QFrame *frame_6;
    QLabel *label;
    QFrame *frame_4;
    QGridLayout *gridLayout_3;
    QFrame *frame_7;
    QLabel *label_2;
    QFrame *frame_5;
    QGridLayout *gridLayout_4;
    QFrame *frame_8;
    QLabel *label_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *addButton;
    QPushButton *removeButton;
    QPushButton *finishedBitton;
    QPushButton *nowButton;
    QPushButton *wishButton;

    void setupUi(QDialog *EditWindow)
    {
        if (EditWindow->objectName().isEmpty())
            EditWindow->setObjectName(QString::fromUtf8("EditWindow"));
        EditWindow->resize(765, 575);
        gridLayout_6 = new QGridLayout(EditWindow);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        tableView = new QTableView(EditWindow);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_6->addWidget(tableView, 0, 0, 1, 1);

        frame_2 = new QFrame(EditWindow);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_6 = new QFrame(frame_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_6, 0, 0, 1, 1);

        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        gridLayout_5->addWidget(frame_3, 0, 0, 1, 1);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_7, 0, 0, 1, 1);

        label_2 = new QLabel(frame_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);


        gridLayout_5->addWidget(frame_4, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);

        gridLayout_4->addWidget(frame_8, 0, 0, 1, 1);

        label_3 = new QLabel(frame_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 1, 1, 1);


        gridLayout_5->addWidget(frame_5, 2, 0, 1, 1);


        gridLayout_6->addWidget(frame_2, 1, 0, 1, 1);

        frame = new QFrame(EditWindow);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        addButton = new QPushButton(frame);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout_2->addWidget(addButton, 0, 0, 1, 1);

        removeButton = new QPushButton(frame);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout_2->addWidget(removeButton, 1, 0, 1, 1);

        finishedBitton = new QPushButton(frame);
        finishedBitton->setObjectName(QString::fromUtf8("finishedBitton"));

        gridLayout_2->addWidget(finishedBitton, 6, 0, 1, 1);

        nowButton = new QPushButton(frame);
        nowButton->setObjectName(QString::fromUtf8("nowButton"));

        gridLayout_2->addWidget(nowButton, 3, 0, 1, 1);

        wishButton = new QPushButton(frame);
        wishButton->setObjectName(QString::fromUtf8("wishButton"));

        gridLayout_2->addWidget(wishButton, 2, 0, 1, 1);


        gridLayout_6->addWidget(frame, 0, 1, 2, 1);


        retranslateUi(EditWindow);
        QObject::connect(removeButton, SIGNAL(clicked()), EditWindow, SLOT(removeRow()));
        QObject::connect(wishButton, SIGNAL(clicked()), EditWindow, SLOT(wishList()));
        QObject::connect(finishedBitton, SIGNAL(clicked()), EditWindow, SLOT(finishedList()));
        QObject::connect(nowButton, SIGNAL(clicked()), EditWindow, SLOT(progressList()));

        QMetaObject::connectSlotsByName(EditWindow);
    } // setupUi

    void retranslateUi(QDialog *EditWindow)
    {
        EditWindow->setWindowTitle(QCoreApplication::translate("EditWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditWindow", "wishlist", nullptr));
        label_2->setText(QCoreApplication::translate("EditWindow", "read now", nullptr));
        label_3->setText(QCoreApplication::translate("EditWindow", "finished", nullptr));
        addButton->setText(QCoreApplication::translate("EditWindow", "Add new", nullptr));
        removeButton->setText(QCoreApplication::translate("EditWindow", "Remove", nullptr));
        finishedBitton->setText(QCoreApplication::translate("EditWindow", "Finished", nullptr));
        nowButton->setText(QCoreApplication::translate("EditWindow", "In Progress", nullptr));
        wishButton->setText(QCoreApplication::translate("EditWindow", "To wish list", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditWindow: public Ui_EditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITWINDOW_H
