/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *view_tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *viewstudents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *select_get;
    QLineEdit *get1;
    QLineEdit *get2;
    QLineEdit *get3;
    QPushButton *search_button;
    QWidget *add_tab;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *add_gender;
    QLabel *label;
    QLineEdit *add_lastname;
    QLabel *label_2;
    QLineEdit *add_firstname;
    QLineEdit *add_middlename;
    QLabel *label_5;
    QLineEdit *add_group;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_button;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *remove_tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *studnum_getter;
    QPushButton *view_button;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *del_view;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *delete_button;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *connection_check;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        view_tab = new QWidget();
        view_tab->setObjectName("view_tab");
        gridLayout_2 = new QGridLayout(view_tab);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        viewstudents = new QTableWidget(view_tab);
        if (viewstudents->columnCount() < 6)
            viewstudents->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        viewstudents->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        viewstudents->setObjectName("viewstudents");
        viewstudents->setSortingEnabled(true);
        viewstudents->setColumnCount(6);
        viewstudents->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(viewstudents);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        select_get = new QComboBox(view_tab);
        select_get->addItem(QString());
        select_get->addItem(QString());
        select_get->addItem(QString());
        select_get->addItem(QString());
        select_get->addItem(QString());
        select_get->setObjectName("select_get");

        horizontalLayout->addWidget(select_get);

        get1 = new QLineEdit(view_tab);
        get1->setObjectName("get1");
        get1->setMaxLength(40);

        horizontalLayout->addWidget(get1);

        get2 = new QLineEdit(view_tab);
        get2->setObjectName("get2");
        get2->setMaxLength(40);

        horizontalLayout->addWidget(get2);

        get3 = new QLineEdit(view_tab);
        get3->setObjectName("get3");
        get3->setMaxLength(40);

        horizontalLayout->addWidget(get3);

        search_button = new QPushButton(view_tab);
        search_button->setObjectName("search_button");

        horizontalLayout->addWidget(search_button);


        verticalLayout_2->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(view_tab, QString());
        add_tab = new QWidget();
        add_tab->setObjectName("add_tab");
        verticalLayout_4 = new QVBoxLayout(add_tab);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(30);
        label_3 = new QLabel(add_tab);
        label_3->setObjectName("label_3");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(add_tab);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        add_gender = new QComboBox(add_tab);
        add_gender->addItem(QString());
        add_gender->addItem(QString());
        add_gender->setObjectName("add_gender");

        formLayout->setWidget(4, QFormLayout::FieldRole, add_gender);

        label = new QLabel(add_tab);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        add_lastname = new QLineEdit(add_tab);
        add_lastname->setObjectName("add_lastname");
        add_lastname->setMaxLength(40);

        formLayout->setWidget(1, QFormLayout::FieldRole, add_lastname);

        label_2 = new QLabel(add_tab);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        add_firstname = new QLineEdit(add_tab);
        add_firstname->setObjectName("add_firstname");
        add_firstname->setMaxLength(40);

        formLayout->setWidget(2, QFormLayout::FieldRole, add_firstname);

        add_middlename = new QLineEdit(add_tab);
        add_middlename->setObjectName("add_middlename");
        add_middlename->setMaxLength(40);

        formLayout->setWidget(3, QFormLayout::FieldRole, add_middlename);

        label_5 = new QLabel(add_tab);
        label_5->setObjectName("label_5");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        add_group = new QLineEdit(add_tab);
        add_group->setObjectName("add_group");
        add_group->setMaxLength(40);

        formLayout->setWidget(5, QFormLayout::FieldRole, add_group);


        horizontalLayout_3->addLayout(formLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        add_button = new QPushButton(add_tab);
        add_button->setObjectName("add_button");

        horizontalLayout_2->addWidget(add_button);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabWidget->addTab(add_tab, QString());
        remove_tab = new QWidget();
        remove_tab->setObjectName("remove_tab");
        verticalLayout_5 = new QVBoxLayout(remove_tab);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(remove_tab);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        studnum_getter = new QLineEdit(remove_tab);
        studnum_getter->setObjectName("studnum_getter");

        horizontalLayout_4->addWidget(studnum_getter);

        view_button = new QPushButton(remove_tab);
        view_button->setObjectName("view_button");
        view_button->setCheckable(true);

        horizontalLayout_4->addWidget(view_button);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);

        del_view = new QTableWidget(remove_tab);
        if (del_view->columnCount() < 6)
            del_view->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        del_view->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        del_view->setObjectName("del_view");
        del_view->setEnabled(true);
        del_view->setColumnCount(6);
        del_view->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(del_view);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        delete_button = new QPushButton(remove_tab);
        delete_button->setObjectName("delete_button");

        horizontalLayout_5->addWidget(delete_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        tabWidget->addTab(remove_tab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        connection_check = new QRadioButton(centralwidget);
        connection_check->setObjectName("connection_check");
        connection_check->setEnabled(true);
        connection_check->setCheckable(true);
        connection_check->setChecked(false);

        gridLayout->addWidget(connection_check, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "C-NOVA App", nullptr));
        QTableWidgetItem *___qtablewidgetitem = viewstudents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = viewstudents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = viewstudents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = viewstudents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = viewstudents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = viewstudents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\263\320\276", nullptr));
        select_get->setItemText(0, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\262\321\201\320\265\321\205", nullptr));
        select_get->setItemText(1, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\277\320\276 \321\204\320\260\320\274\320\270\320\273\320\270\320\270", nullptr));
        select_get->setItemText(2, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\277\320\276 \320\244\320\230\320\236", nullptr));
        select_get->setItemText(3, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\277\320\276 \320\263\321\200\321\203\320\277\320\277\320\265", nullptr));
        select_get->setItemText(4, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\276\320\261\321\200\320\260\320\267\320\270\321\202\321\214 \320\277\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\274\321\203", nullptr));

        search_button->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\320\272\320\260\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(view_tab), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        add_gender->setItemText(0, QCoreApplication::translate("MainWindow", "\320\234", nullptr));
        add_gender->setItemText(1, QCoreApplication::translate("MainWindow", "\320\226", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(add_tab), QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        view_button->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = del_view->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = del_view->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = del_view->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = del_view->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = del_view->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = del_view->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\201\321\202\321\203\320\264\320\265\320\275\321\207\320\265\321\201\320\272\320\276\320\263\320\276", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(remove_tab), QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265", nullptr));
        connection_check->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
