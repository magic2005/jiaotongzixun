#pragma execution_character_set("utf-8")
#ifndef CITYEDIT_H
#define CITYEDIT_H

#include<QWidget>
#include<string>
namespace Ui {
class cityedit;
}
class cityedit : public QWidget
{
    Q_OBJECT

public:
    explicit cityedit(QWidget *parent = nullptr);
    ~cityedit();
private slots:
    void on_cityedit_confirm_pushbutton_clicked();
    void on_cityedit_exit_pushbutton_clicked();
signals:
    void sendcityinf(std::string,std::string);
private:
    Ui::cityedit *ui;
};

#endif // CITYEDIT_H
