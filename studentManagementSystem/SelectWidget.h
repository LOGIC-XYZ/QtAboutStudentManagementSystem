#ifndef SELECTWIDGET_H
#define SELECTWIDGET_H

#include <QWidget>
#include <QtDebug>
#include <QFile>
#include <QVector>
#include <QMessageBox>

namespace Ui {
class SelectWidget;
}

class SelectWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectWidget(QWidget *parent = nullptr);
    ~SelectWidget();

private:
    Ui::SelectWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_selectIdButton_clicked();
    void on_selectNameButton_clicked();

};

#endif // SELECTWIDGET_H
