#include "formempleado.h"
#include "ui_formempleado.h"

FormEmpleado::FormEmpleado(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FormEmpleado)
{
    ui->setupUi(this);
}

FormEmpleado::~FormEmpleado()
{
    delete ui;
}

QString FormEmpleado::ObtenerNombre() {
    return this->ui->txtNombre->text();
}
