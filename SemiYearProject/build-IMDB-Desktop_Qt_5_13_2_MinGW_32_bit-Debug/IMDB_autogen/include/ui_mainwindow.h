/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad_data;
    QAction *actionSave_data;
    QAction *actionAdd_record;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton;
    QDoubleSpinBox *doubleSpinBox_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QFrame *line;
    QTableView *tableView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1043, 674);
        actionLoad_data = new QAction(MainWindow);
        actionLoad_data->setObjectName(QString::fromUtf8("actionLoad_data"));
        actionSave_data = new QAction(MainWindow);
        actionSave_data->setObjectName(QString::fromUtf8("actionSave_data"));
        actionAdd_record = new QAction(MainWindow);
        actionAdd_record->setObjectName(QString::fromUtf8("actionAdd_record"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 5, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(centralwidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        gridLayout->addWidget(doubleSpinBox_2, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        gridLayout->addWidget(dateEdit, 0, 4, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 4, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(centralwidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        gridLayout->addWidget(doubleSpinBox, 0, 3, 1, 1);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setBaseSize(QSize(300, 200));

        verticalLayout->addWidget(tableView);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1043, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad_data);
        menuFile->addAction(actionSave_data);
        menuFile->addAction(actionAdd_record);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad_data->setText(QCoreApplication::translate("MainWindow", "Load data", nullptr));
        actionSave_data->setText(QCoreApplication::translate("MainWindow", "Save data", nullptr));
        actionAdd_record->setText(QCoreApplication::translate("MainWindow", "Add record", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Rating", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Popularity", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "ar", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "bn", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "ca", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "cn", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "cs", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "da", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "de", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "el", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "en", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("MainWindow", "es", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("MainWindow", "et", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("MainWindow", "eu", nullptr));
        comboBox->setItemText(12, QCoreApplication::translate("MainWindow", "fa", nullptr));
        comboBox->setItemText(13, QCoreApplication::translate("MainWindow", "fi", nullptr));
        comboBox->setItemText(14, QCoreApplication::translate("MainWindow", "fr", nullptr));
        comboBox->setItemText(15, QCoreApplication::translate("MainWindow", "he", nullptr));
        comboBox->setItemText(16, QCoreApplication::translate("MainWindow", "hi", nullptr));
        comboBox->setItemText(17, QCoreApplication::translate("MainWindow", "hu", nullptr));
        comboBox->setItemText(18, QCoreApplication::translate("MainWindow", "id", nullptr));
        comboBox->setItemText(19, QCoreApplication::translate("MainWindow", "is", nullptr));
        comboBox->setItemText(20, QCoreApplication::translate("MainWindow", "it", nullptr));
        comboBox->setItemText(21, QCoreApplication::translate("MainWindow", "ja", nullptr));
        comboBox->setItemText(22, QCoreApplication::translate("MainWindow", "ko", nullptr));
        comboBox->setItemText(23, QCoreApplication::translate("MainWindow", "la", nullptr));
        comboBox->setItemText(24, QCoreApplication::translate("MainWindow", "lv", nullptr));
        comboBox->setItemText(25, QCoreApplication::translate("MainWindow", "ml", nullptr));
        comboBox->setItemText(26, QCoreApplication::translate("MainWindow", "ms", nullptr));
        comboBox->setItemText(27, QCoreApplication::translate("MainWindow", "nb", nullptr));
        comboBox->setItemText(28, QCoreApplication::translate("MainWindow", "nl", nullptr));
        comboBox->setItemText(29, QCoreApplication::translate("MainWindow", "no", nullptr));
        comboBox->setItemText(30, QCoreApplication::translate("MainWindow", "pl", nullptr));
        comboBox->setItemText(31, QCoreApplication::translate("MainWindow", "pt", nullptr));
        comboBox->setItemText(32, QCoreApplication::translate("MainWindow", "ro", nullptr));
        comboBox->setItemText(33, QCoreApplication::translate("MainWindow", "ru", nullptr));
        comboBox->setItemText(34, QCoreApplication::translate("MainWindow", "sr", nullptr));
        comboBox->setItemText(35, QCoreApplication::translate("MainWindow", "sv", nullptr));
        comboBox->setItemText(36, QCoreApplication::translate("MainWindow", "ta", nullptr));
        comboBox->setItemText(37, QCoreApplication::translate("MainWindow", "te", nullptr));
        comboBox->setItemText(38, QCoreApplication::translate("MainWindow", "th", nullptr));
        comboBox->setItemText(39, QCoreApplication::translate("MainWindow", "tl", nullptr));
        comboBox->setItemText(40, QCoreApplication::translate("MainWindow", "tr", nullptr));
        comboBox->setItemText(41, QCoreApplication::translate("MainWindow", "uk", nullptr));
        comboBox->setItemText(42, QCoreApplication::translate("MainWindow", "zh", nullptr));

        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
