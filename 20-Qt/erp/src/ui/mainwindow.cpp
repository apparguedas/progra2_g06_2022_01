#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "./../calculadora_local/calculadora_local.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    calculadora = new Progra2::Calculadora();

    this->numero1EsCorrecto = false;
    this->numero2EsCorrecto = false;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete calculadora;
}



void MainWindow::on_btnMultiplicacionLocal_clicked()
{
    Calculadora_local *calculadora = new Calculadora_local();

    int resultado = calculadora->Multiplique(5, 2);

    delete calculadora;

    QString stringResultado = QString::number(resultado);

    this->ui->labelResultado->setText(stringResultado);
}


void MainWindow::on_btnSumaBiblioteca_clicked()
{
    int resultado = this->calculadora->Sumar(1, 4);

    QString stringResultado = QString::number(resultado);

    this->ui->labelResultadoBiblioteca->setText(stringResultado);
}


void MainWindow::on_pushButton_clicked()
{
    try
    {
        QString stringNumero1 = this->ui->editNumero1->text();
        bool ok = false;
        int numero1 = stringNumero1.toInt(&ok);

        if (!ok)
        {
            throw "Error";
        }

        QString stringNumero2 = this->ui->editNumero2->text();
        ok = false;
        int numero2 = stringNumero2.toInt(&ok);

        if (!ok)
        {
            throw "Error";
        }

        int resultado = this->calculadora->Sumar(numero1, numero2);

        QString stringResultado = QString::number(resultado);

        this->ui->editResultado->setText(stringResultado);
    }
    catch (char const*message)
    {
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("Error en la suma");
        msgbox->open();

        //this->ui->editResultado->setText("Error!");
    }


}


void MainWindow::on_botonLimpiar_clicked()
{
    this->ui->editNumero1->setText("");
    this->ui->editNumero2->setText("");
    this->ui->editResultado->setText("");
    this->ui->labelErrorNumero1->setText("");
    this->ui->labelErrorNumero2->setText("");

    this->ui->editNumero1->setFocus();
}


void MainWindow::on_editNumero1_editingFinished()
{
    QString stringNumero1 = this->ui->editNumero1->text();

    bool ok = false;

    if (stringNumero1.isEmpty())
    {
        ok = true;
    }
    else
    {
        stringNumero1.toInt(&ok);
    }


    if (ok)
    {
        this->ui->labelErrorNumero1->setText("");
        this->numero1EsCorrecto = true;
    }
    else
    {
        this->ui->labelErrorNumero1->setText("Número 1 es inválido");
        this->numero1EsCorrecto = false;
    }

}


void MainWindow::on_editNumero2_editingFinished()
{
    QString stringNumero2 = this->ui->editNumero2->text();
    bool ok = false;

    if (stringNumero2.isEmpty())
    {
        ok = true;
    }
    else
    {
        stringNumero2.toInt(&ok);
    }


    if (ok)
    {
        this->ui->labelErrorNumero2->setText("");
        this->numero2EsCorrecto = true;
    }
    else
    {
        this->ui->labelErrorNumero2->setText("Número 2 es inválido");
        this->numero2EsCorrecto = false;
    }
}


void MainWindow::on_btnAgregarValor_clicked()
{
    int id = this->ui->listaEditable->count();
    QString opcion = "Opción nueva " + QString::number(id);

    QListWidgetItem *itemNuevo = new QListWidgetItem(opcion);
    itemNuevo->setData(1, id);

    this->ui->listaEditable->addItem(itemNuevo);
}


void MainWindow::on_btnLeerValor_clicked()
{
    QListWidgetItem *itemSeleccionado = this->ui->listaEditable->currentItem();

    if (itemSeleccionado == nullptr)
    {
        // no hay ítem seleccionado
        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText("No hay ítem seleccionado");
        msgbox->open();
    }
    else
    {
        QString texto = itemSeleccionado->data(1).toString();

        QMessageBox* msgbox = new QMessageBox(this);
        msgbox->setWindowTitle("Título del diálogo");
        msgbox->setText(texto);
        msgbox->open();
    }


}

