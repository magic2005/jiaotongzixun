#pragma execution_character_set("utf-8")
#ifndef PATHADD_H
#define PATHADD_H

#include <QWidget>
#include"algraph.h"
namespace Ui {
class pathadd;
}
class pathadd : public QWidget
{
    Q_OBJECT
public:
    explicit pathadd(QWidget *parent = nullptr);
    ~pathadd();
private slots:
    void on_pathadd_Confirm_pushButton_clicked();
    void on_pathadd_Exit_pushButton_clicked();
    void pathST_EditDay();
    void pathET_EditDay();
signals:
    //传输线路的交通工具，车次，起始站，终点站，出发时间，到达时间，旅费
    void sendPathInf(struct LineNode);
private:
    Ui::pathadd *ui;
    QStringList monthList;
    int dayN=31;
    int day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    QStringList dayList;
    QStringList hourList;
    QStringList minList;
};

#endif // PATHADD_H
