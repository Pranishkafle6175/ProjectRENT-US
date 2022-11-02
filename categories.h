#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QDialog>

namespace Ui {
class Categories;
}

class Categories : public QDialog
{
    Q_OBJECT

public:
    explicit Categories(QWidget *parent = nullptr);
    ~Categories();

private:
    Ui::Categories *ui;
};

#endif // CATEGORIES_H
