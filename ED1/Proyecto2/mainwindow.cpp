#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Crear_clicked()
{
    Crear = new QPushButton("Crear",this);
    connect(Crear, SIGNAL (clicked()), this, SLOT (on_Crear_clicked()));
    Folder = new QPushButton("",this);
    Folder->setGeometry(QRect(QPoint(Posx,Posy),QSize(200,50)));
    Folder->setIcon(QIcon("C:/Users/Juan Carranza/Desktop/Nueva carpeta (3)/File_icon.png"));
    Folder->setIconSize(QSize(65,65));
    Folder->resize(100,100);
    Folder->setVisible(true);
    Posx += 100;

}
void MainWindow::on_Folder_clicked(){
    Crear1 = new QPushButton("Folder",this);
    connect(Crear1, SIGNAL (clicked()), this, SLOT (on_Folder_clicked()));
    Folder = new QPushButton("",this);
    Folder->setGeometry(QRect(QPoint(Posx,Posy),QSize(200,50)));
    Folder->setIcon(QIcon("C:/Users/Juan Carranza/Desktop/Nueva carpeta (3)/Folder_icon.png"));
    Folder->setIconSize(QSize(65,65));
    Folder->resize(100,100);
    Folder->setVisible(true);
    Posx += 100;
}

