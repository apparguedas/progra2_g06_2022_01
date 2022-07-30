#ifndef FORMEMPLEADO_H
#define FORMEMPLEADO_H

#include <QDialog>

namespace Ui {
class FormEmpleado;
}

class FormEmpleado : public QDialog
{
    Q_OBJECT

public:
    explicit FormEmpleado(QWidget *parent = nullptr);
    ~FormEmpleado();

    QString ObtenerNombre();

private:
    Ui::FormEmpleado *ui;
};

#endif // FORMEMPLEADO_H
