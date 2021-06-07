/********************************************************************************
** Form generated from reading UI file 'addnewrow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWROW_H
#define UI_ADDNEWROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addNewRow
{
public:
    QGridLayout *gridLayout;
    QFrame *year_frame;
    QGridLayout *gridLayout_7;
    QLabel *label_6;
    QLineEdit *year_lineEdit;
    QFrame *rating_frame;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QLineEdit *rating_lineEdit;
    QFrame *reviews_frame;
    QGridLayout *gridLayout_5;
    QLineEdit *reviews_lineEdit;
    QLabel *label_4;
    QFrame *name_frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *name_lineEdit;
    QFrame *author_frame;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLineEdit *author_lineEdit;
    QFrame *genre_frame;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *genre_lineEdit;
    QFrame *price_frame;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLineEdit *price_lineEdit;
    QPushButton *ok_pushButton;

    void setupUi(QDialog *addNewRow)
    {
        if (addNewRow->objectName().isEmpty())
            addNewRow->setObjectName(QString::fromUtf8("addNewRow"));
        addNewRow->resize(785, 585);
        gridLayout = new QGridLayout(addNewRow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        year_frame = new QFrame(addNewRow);
        year_frame->setObjectName(QString::fromUtf8("year_frame"));
        year_frame->setFrameShape(QFrame::StyledPanel);
        year_frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(year_frame);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_6 = new QLabel(year_frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_7->addWidget(label_6, 0, 0, 1, 1);

        year_lineEdit = new QLineEdit(year_frame);
        year_lineEdit->setObjectName(QString::fromUtf8("year_lineEdit"));

        gridLayout_7->addWidget(year_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(year_frame, 5, 0, 1, 1);

        rating_frame = new QFrame(addNewRow);
        rating_frame->setObjectName(QString::fromUtf8("rating_frame"));
        rating_frame->setFrameShape(QFrame::StyledPanel);
        rating_frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(rating_frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_3 = new QLabel(rating_frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        rating_lineEdit = new QLineEdit(rating_frame);
        rating_lineEdit->setObjectName(QString::fromUtf8("rating_lineEdit"));

        gridLayout_4->addWidget(rating_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(rating_frame, 2, 0, 1, 1);

        reviews_frame = new QFrame(addNewRow);
        reviews_frame->setObjectName(QString::fromUtf8("reviews_frame"));
        reviews_frame->setFrameShape(QFrame::StyledPanel);
        reviews_frame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(reviews_frame);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        reviews_lineEdit = new QLineEdit(reviews_frame);
        reviews_lineEdit->setObjectName(QString::fromUtf8("reviews_lineEdit"));

        gridLayout_5->addWidget(reviews_lineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(reviews_frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);


        gridLayout->addWidget(reviews_frame, 3, 0, 1, 1);

        name_frame = new QFrame(addNewRow);
        name_frame->setObjectName(QString::fromUtf8("name_frame"));
        name_frame->setFrameShape(QFrame::StyledPanel);
        name_frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(name_frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(name_frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        name_lineEdit = new QLineEdit(name_frame);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        gridLayout_2->addWidget(name_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(name_frame, 0, 0, 1, 1);

        author_frame = new QFrame(addNewRow);
        author_frame->setObjectName(QString::fromUtf8("author_frame"));
        author_frame->setFrameShape(QFrame::StyledPanel);
        author_frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(author_frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(author_frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        author_lineEdit = new QLineEdit(author_frame);
        author_lineEdit->setObjectName(QString::fromUtf8("author_lineEdit"));

        gridLayout_3->addWidget(author_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(author_frame, 1, 0, 1, 1);

        genre_frame = new QFrame(addNewRow);
        genre_frame->setObjectName(QString::fromUtf8("genre_frame"));
        genre_frame->setFrameShape(QFrame::StyledPanel);
        genre_frame->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(genre_frame);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_7 = new QLabel(genre_frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        genre_lineEdit = new QLineEdit(genre_frame);
        genre_lineEdit->setObjectName(QString::fromUtf8("genre_lineEdit"));

        gridLayout_8->addWidget(genre_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(genre_frame, 6, 0, 1, 1);

        price_frame = new QFrame(addNewRow);
        price_frame->setObjectName(QString::fromUtf8("price_frame"));
        price_frame->setFrameShape(QFrame::StyledPanel);
        price_frame->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(price_frame);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_5 = new QLabel(price_frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        price_lineEdit = new QLineEdit(price_frame);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));

        gridLayout_6->addWidget(price_lineEdit, 0, 1, 1, 1);


        gridLayout->addWidget(price_frame, 4, 0, 1, 1);

        ok_pushButton = new QPushButton(addNewRow);
        ok_pushButton->setObjectName(QString::fromUtf8("ok_pushButton"));

        gridLayout->addWidget(ok_pushButton, 7, 0, 1, 1);


        retranslateUi(addNewRow);
        QObject::connect(ok_pushButton, SIGNAL(clicked()), addNewRow, SLOT(ok_button()));

        QMetaObject::connectSlotsByName(addNewRow);
    } // setupUi

    void retranslateUi(QDialog *addNewRow)
    {
        addNewRow->setWindowTitle(QCoreApplication::translate("addNewRow", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("addNewRow", "Year", nullptr));
        label_3->setText(QCoreApplication::translate("addNewRow", "User Rating", nullptr));
        label_4->setText(QCoreApplication::translate("addNewRow", "Reviews", nullptr));
        label->setText(QCoreApplication::translate("addNewRow", "Name of the Books", nullptr));
        label_2->setText(QCoreApplication::translate("addNewRow", "Author", nullptr));
        label_7->setText(QCoreApplication::translate("addNewRow", "Genre", nullptr));
        label_5->setText(QCoreApplication::translate("addNewRow", "Price", nullptr));
        ok_pushButton->setText(QCoreApplication::translate("addNewRow", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addNewRow: public Ui_addNewRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWROW_H
