#include "mainwindow.h"

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      _movietable(new MovieTable(this)),
      _mdlMaster(new QStringListModel(this)),
      _mdlDetail{new QStringListModel(this)}
{
    ui->setupUi(this);
    ui->tableView->setModel(_movietable);
}

MainWindow::~MainWindow() { delete ui; }

// void MainWindow::loadMasterModel()
//{
//    _mdlMaster->layoutAboutToBeChanged();
//    _mdlMaster->setData(_movietable->getMoviesDiscrList(), loadFile());
//    _mdlMaster->layoutChanged();
//}

void MainWindow::on_tableView_activated(const QModelIndex &index) {}

void MainWindow::on_actionLoad_data_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this, "Open File", "", "Text files (*.csv);;All files (*.*)");
    _movietable->layoutAboutToBeChanged();
    _movietable->loadFile(fileName);
    _movietable->layoutChanged();
}
