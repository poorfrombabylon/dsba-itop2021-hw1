#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    //renderArea = new RenderArea(ui->frame);

    ui->frame_6->setStyleSheet("background-color: rgb(255,200,0)");
    ui->frame_2->setStyleSheet("background-color: rgb(255,255,255)");
    ui->frame_3->setStyleSheet("background-color: rgb(0,0,255)");
    ui->frame_4->setStyleSheet("background-color: rgb(255,0,0)");
    ui->frame_5->setStyleSheet("background-color: rgb(75,0,130)");
    ui->frame_6->setStyleSheet("background-color: rgb(255,127,80)");
    ui->frame_7->setStyleSheet("background-color: rgb(0,128,128)");
    ui->frame_8->setStyleSheet("background-color: rgb(100,149,237)");
    ui->frame_9->setStyleSheet("background-color: rgb(128,0,128)");
    ui->frame_11->setStyleSheet("background-color: rgb(139,69,19)");
}

AboutDialog::~AboutDialog()
{
    delete ui;
    delete renderArea;
}
