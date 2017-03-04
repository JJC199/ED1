#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QIcon>
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Crear_clicked();
    void on_Folder_clicked();
private:
    Ui::MainWindow *ui;
    QPushButton *Crear;
    QPushButton *Folder;
    QPushButton *Crear1;
    int Posx =200;
    int Posy = 50;
};

#endif // MAINWINDOW_H
