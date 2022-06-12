#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFileDialog>
#include <QMainWindow>

#include "movietable.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

   public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

   protected:
    MovieTable *_movietable;
    QStringListModel *_mdlMaster;
    QStringListModel *_mdlDetail;

    void loadMasterModel();

   private slots:
    void on_tableView_activated(const QModelIndex &index);
    void on_actionLoad_data_triggered();

   private:
    Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H
