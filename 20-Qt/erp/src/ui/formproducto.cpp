#include "formproducto.h"
#include "ui_formproducto.h"

formProducto::formProducto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formProducto)
{
    ui->setupUi(this);
}

formProducto::~formProducto()
{
    delete ui;
}

void formProducto::CargarInformacion(int id, std::string nombre, int existencias)
{
    QString stringID = QString::number(id);
    this->ui->txtID->setText(stringID);
    this->ui->txtID->setReadOnly(true);

    QString stringNombre = QString::fromStdString(nombre);
    this->ui->txtNombre->setText(stringNombre);

    QString stringExistencias = QString::number(existencias);
    this->ui->txtExistencias->setText(stringExistencias);
}

int formProducto::ObtenerID()
{
    QString stringID = this->ui->txtID->text();
    int id = stringID.toInt();
    return id;
}

std::string formProducto::ObtenerNombre()
{
    QString stringNombre = this->ui->txtNombre->text();
    std::string nombre = stringNombre.toStdString();
    return nombre;
}

int formProducto::ObtenerExistencias()
{
    QString stringExistencias = this->ui->txtExistencias->text();
    int existencias = stringExistencias.toInt();
    return existencias;
}
