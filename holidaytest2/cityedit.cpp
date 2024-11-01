#include "cityedit.h"
#include "ui_cityedit.h"

cityedit::cityedit(QWidget *parent):
    QWidget(parent),
    ui(new Ui::cityedit)
{
    ui->setupUi(this);
    ui->Trans_comboBox->addItem("火车");
    ui->Trans_comboBox->addItem("飞机");
}
cityedit::~cityedit()
{
    delete ui;
}

void cityedit::on_cityedit_confirm_pushbutton_clicked(){
    QString Transportation,CityName;
    Transportation= ui->Trans_comboBox->currentText();
    CityName=ui->CityName_lineEdit->text();
    emit sendcityinf(Transportation.toStdString(),CityName.toStdString());
    this->close();
}
void cityedit::on_cityedit_exit_pushbutton_clicked()
{
    this->close();
}
