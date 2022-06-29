#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./../../lib/include/calculadora.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnMultiplicacionLocal_clicked();

    void on_btnSumaBiblioteca_clicked();

    void on_pushButton_clicked();

    void on_botonLimpiar_clicked();

    void on_editNumero1_editingFinished();

    void on_editNumero2_editingFinished();

    void on_btnAgregarValor_clicked();

    void on_btnLeerValor_clicked();

private:
    Ui::MainWindow *ui;
    Progra2::Calculadora *calculadora;
    bool numero1EsCorrecto;
    bool numero2EsCorrecto;
};
#endif // MAINWINDOW_H
