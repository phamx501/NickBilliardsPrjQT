#ifndef INFOBOX_H
#define INFOBOX_H

#include <QDialog>

namespace Ui {
class infobox;
}

class infobox : public QDialog
{
    Q_OBJECT

public:
    explicit infobox(QWidget *parent = nullptr);
    ~infobox();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::infobox *ui;
};

#endif // INFOBOX_H
