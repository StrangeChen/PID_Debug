/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_27;
    QLabel *label_26;
    QComboBox *comboBox_baud;
    QLabel *label_28;
    QComboBox *comboBox_com;
    QPushButton *pushButton_uart_sw;
    QPushButton *pushButton_uart_rfresh;
    QPlainTextEdit *plainTextEdit_rx;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QRadioButton *radioButton_show_ascii;
    QPushButton *pushButton_save;
    QRadioButton *radioButton_show_hex;
    QPushButton *pushButton_clean;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_tx_ascii;
    QRadioButton *radioButton_tx_hex;
    QPushButton *pushButton_tx;
    QPushButton *pushButton_clean_tx;
    QPlainTextEdit *plainTextEdit_tx;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_29;
    QLabel *label_30;
    QComboBox *comboBox_baud_2;
    QLabel *label_31;
    QComboBox *comboBox_com_2;
    QPushButton *pushButton_uart_sw_2;
    QPushButton *pushButton_uart_rfresh_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_15;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_9;
    QCheckBox *checkBox_1;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_7;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBox_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_8;
    QGridLayout *gridLayout_11;
    QCheckBox *checkBox_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_9;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_10;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBox_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_11;
    QGridLayout *gridLayout_14;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *checkBox_6;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_6;
    QSpacerItem *horizontalSpacer_8;
    QSlider *horizontalSlider;
    QCheckBox *checkBox_curve_show_random;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_dynamic_curve;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_max_P;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_max_I;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_max_D;
    QSlider *verticalSlider_P;
    QDoubleSpinBox *doubleSpinBox_P;
    QSlider *verticalSlider_I;
    QDoubleSpinBox *doubleSpinBox_I;
    QSlider *verticalSlider_D;
    QDoubleSpinBox *doubleSpinBox_D;
    QCheckBox *checkBox_P;
    QCheckBox *checkBox_I;
    QCheckBox *checkBox_D;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1465, 717);
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setWindowOpacity(1);
        MainWindow->setIconSize(QSize(18, 18));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));

        gridLayout_2->addWidget(label_27, 1, 0, 1, 1);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMaximumSize(QSize(90, 16777215));

        gridLayout_2->addWidget(label_26, 0, 0, 1, 1);

        comboBox_baud = new QComboBox(groupBox);
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->addItem(QString());
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));
        comboBox_baud->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_2->addWidget(comboBox_baud, 1, 1, 1, 2);

        label_28 = new QLabel(groupBox);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setStyleSheet(QLatin1String("background:rgb(85, 170, 255);\n"
"border:1px solid gray;\n"
"        width:300px;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_2->addWidget(label_28, 2, 0, 1, 1);

        comboBox_com = new QComboBox(groupBox);
        comboBox_com->setObjectName(QStringLiteral("comboBox_com"));
        comboBox_com->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_2->addWidget(comboBox_com, 0, 1, 1, 2);

        pushButton_uart_sw = new QPushButton(groupBox);
        pushButton_uart_sw->setObjectName(QStringLiteral("pushButton_uart_sw"));
        pushButton_uart_sw->setMinimumSize(QSize(0, 35));
        pushButton_uart_sw->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_2->addWidget(pushButton_uart_sw, 2, 2, 1, 1);

        pushButton_uart_rfresh = new QPushButton(groupBox);
        pushButton_uart_rfresh->setObjectName(QStringLiteral("pushButton_uart_rfresh"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_uart_rfresh->sizePolicy().hasHeightForWidth());
        pushButton_uart_rfresh->setSizePolicy(sizePolicy);
        pushButton_uart_rfresh->setMinimumSize(QSize(0, 33));
        pushButton_uart_rfresh->setBaseSize(QSize(0, 0));
        pushButton_uart_rfresh->setLayoutDirection(Qt::LeftToRight);
        pushButton_uart_rfresh->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));
        pushButton_uart_rfresh->setIconSize(QSize(12, 12));

        gridLayout_2->addWidget(pushButton_uart_rfresh, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        plainTextEdit_rx = new QPlainTextEdit(tab);
        plainTextEdit_rx->setObjectName(QStringLiteral("plainTextEdit_rx"));
        plainTextEdit_rx->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        plainTextEdit_rx->setReadOnly(true);
        plainTextEdit_rx->setCenterOnScroll(true);

        gridLayout_4->addWidget(plainTextEdit_rx, 0, 1, 2, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButton_show_ascii = new QRadioButton(groupBox_2);
        radioButton_show_ascii->setObjectName(QStringLiteral("radioButton_show_ascii"));
        radioButton_show_ascii->setMinimumSize(QSize(0, 33));
        radioButton_show_ascii->setCheckable(true);
        radioButton_show_ascii->setChecked(true);
        radioButton_show_ascii->setAutoExclusive(true);

        gridLayout->addWidget(radioButton_show_ascii, 0, 0, 1, 1);

        pushButton_save = new QPushButton(groupBox_2);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setMinimumSize(QSize(0, 33));

        gridLayout->addWidget(pushButton_save, 1, 0, 1, 1);

        radioButton_show_hex = new QRadioButton(groupBox_2);
        radioButton_show_hex->setObjectName(QStringLiteral("radioButton_show_hex"));
        radioButton_show_hex->setMinimumSize(QSize(0, 33));
        radioButton_show_hex->setChecked(false);

        gridLayout->addWidget(radioButton_show_hex, 0, 1, 1, 1);

        pushButton_clean = new QPushButton(groupBox_2);
        pushButton_clean->setObjectName(QStringLiteral("pushButton_clean"));
        pushButton_clean->setMinimumSize(QSize(0, 33));

        gridLayout->addWidget(pushButton_clean, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        radioButton_tx_ascii = new QRadioButton(groupBox_3);
        radioButton_tx_ascii->setObjectName(QStringLiteral("radioButton_tx_ascii"));
        radioButton_tx_ascii->setMinimumSize(QSize(0, 33));
        radioButton_tx_ascii->setCheckable(true);
        radioButton_tx_ascii->setChecked(true);
        radioButton_tx_ascii->setAutoExclusive(true);

        gridLayout_3->addWidget(radioButton_tx_ascii, 0, 0, 1, 1);

        radioButton_tx_hex = new QRadioButton(groupBox_3);
        radioButton_tx_hex->setObjectName(QStringLiteral("radioButton_tx_hex"));
        radioButton_tx_hex->setMinimumSize(QSize(0, 33));
        radioButton_tx_hex->setChecked(false);

        gridLayout_3->addWidget(radioButton_tx_hex, 0, 1, 1, 1);

        pushButton_tx = new QPushButton(groupBox_3);
        pushButton_tx->setObjectName(QStringLiteral("pushButton_tx"));
        pushButton_tx->setMinimumSize(QSize(0, 33));

        gridLayout_3->addWidget(pushButton_tx, 1, 0, 1, 1);

        pushButton_clean_tx = new QPushButton(groupBox_3);
        pushButton_clean_tx->setObjectName(QStringLiteral("pushButton_clean_tx"));
        pushButton_clean_tx->setMinimumSize(QSize(0, 33));

        gridLayout_3->addWidget(pushButton_clean_tx, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 1);

        plainTextEdit_tx = new QPlainTextEdit(tab);
        plainTextEdit_tx->setObjectName(QStringLiteral("plainTextEdit_tx"));
        plainTextEdit_tx->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        gridLayout_4->addWidget(plainTextEdit_tx, 2, 1, 1, 1);

        gridLayout_4->setRowStretch(0, 3);
        gridLayout_4->setRowStretch(1, 2);
        gridLayout_4->setRowStretch(2, 2);
        gridLayout_4->setColumnStretch(0, 1);
        gridLayout_4->setColumnStretch(1, 4);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QStringLiteral(""));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName(QStringLiteral("label_29"));

        gridLayout_5->addWidget(label_29, 1, 0, 1, 1);

        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMaximumSize(QSize(90, 16777215));

        gridLayout_5->addWidget(label_30, 0, 0, 1, 1);

        comboBox_baud_2 = new QComboBox(groupBox_4);
        comboBox_baud_2->addItem(QString());
        comboBox_baud_2->addItem(QString());
        comboBox_baud_2->addItem(QString());
        comboBox_baud_2->setObjectName(QStringLiteral("comboBox_baud_2"));
        comboBox_baud_2->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_5->addWidget(comboBox_baud_2, 1, 1, 1, 2);

        label_31 = new QLabel(groupBox_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("background:rgb(85, 170, 255);\n"
"border:1px solid gray;\n"
"        width:300px;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_5->addWidget(label_31, 2, 0, 1, 1);

        comboBox_com_2 = new QComboBox(groupBox_4);
        comboBox_com_2->setObjectName(QStringLiteral("comboBox_com_2"));
        comboBox_com_2->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_5->addWidget(comboBox_com_2, 0, 1, 1, 2);

        pushButton_uart_sw_2 = new QPushButton(groupBox_4);
        pushButton_uart_sw_2->setObjectName(QStringLiteral("pushButton_uart_sw_2"));
        pushButton_uart_sw_2->setMinimumSize(QSize(0, 33));
        pushButton_uart_sw_2->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_5->addWidget(pushButton_uart_sw_2, 2, 2, 1, 1);

        pushButton_uart_rfresh_2 = new QPushButton(groupBox_4);
        pushButton_uart_rfresh_2->setObjectName(QStringLiteral("pushButton_uart_rfresh_2"));
        sizePolicy.setHeightForWidth(pushButton_uart_rfresh_2->sizePolicy().hasHeightForWidth());
        pushButton_uart_rfresh_2->setSizePolicy(sizePolicy);
        pushButton_uart_rfresh_2->setMinimumSize(QSize(0, 33));
        pushButton_uart_rfresh_2->setBaseSize(QSize(0, 0));
        pushButton_uart_rfresh_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_uart_rfresh_2->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));
        pushButton_uart_rfresh_2->setIconSize(QSize(12, 12));

        gridLayout_5->addWidget(pushButton_uart_rfresh_2, 2, 1, 1, 1);


        gridLayout_8->addWidget(groupBox_4, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_6 = new QGroupBox(tab_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_15 = new QGridLayout(groupBox_6);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        checkBox_1 = new QCheckBox(groupBox_6);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));
        checkBox_1->setMaximumSize(QSize(20, 20));

        gridLayout_9->addWidget(checkBox_1, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 25));
        lineEdit->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_9->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_7 = new QLineEdit(groupBox_6);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(0, 25));
        lineEdit_7->setStyleSheet(QLatin1String("background:rgb(255, 0, 0);color:rgb(255, 255, 255)\n"
";border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_9->addWidget(lineEdit_7, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_9);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        checkBox_2 = new QCheckBox(groupBox_6);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setMaximumSize(QSize(20, 20));

        gridLayout_10->addWidget(checkBox_2, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 25));
        lineEdit_2->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_10->addWidget(lineEdit_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        lineEdit_8 = new QLineEdit(groupBox_6);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 25));
        lineEdit_8->setStyleSheet(QLatin1String("background:rgb(0,255, 0);color:rgb(0,0,0);border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_10->addWidget(lineEdit_8, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_10);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        checkBox_3 = new QCheckBox(groupBox_6);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setMaximumSize(QSize(20, 20));

        gridLayout_11->addWidget(checkBox_3, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(groupBox_6);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 25));
        lineEdit_3->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_11->addWidget(lineEdit_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        lineEdit_9 = new QLineEdit(groupBox_6);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 25));
        lineEdit_9->setStyleSheet(QLatin1String("background:rgb(0, 0, 255);color:rgb(255, 255, 255);border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_11->addWidget(lineEdit_9, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_11);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        checkBox_4 = new QCheckBox(groupBox_6);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setMaximumSize(QSize(20, 20));

        gridLayout_12->addWidget(checkBox_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(groupBox_6);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 25));
        lineEdit_4->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_12->addWidget(lineEdit_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_12->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        lineEdit_10 = new QLineEdit(groupBox_6);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMinimumSize(QSize(0, 25));
        lineEdit_10->setStyleSheet(QLatin1String("background:rgb(255, 255, 0);color:rgb(0,0,0);border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_12->addWidget(lineEdit_10, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_12);

        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        checkBox_5 = new QCheckBox(groupBox_6);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setMaximumSize(QSize(20, 20));

        gridLayout_13->addWidget(checkBox_5, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(groupBox_6);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 25));
        lineEdit_5->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_13->addWidget(lineEdit_5, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_13->addItem(horizontalSpacer_6, 1, 0, 1, 1);

        lineEdit_11 = new QLineEdit(groupBox_6);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 25));
        lineEdit_11->setStyleSheet(QLatin1String("background:rgb(255, 0, 255);color:rgb(0,0,0);border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_13->addWidget(lineEdit_11, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_13);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        horizontalSpacer_7 = new QSpacerItem(17, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_7, 1, 0, 1, 1);

        checkBox_6 = new QCheckBox(groupBox_6);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setMaximumSize(QSize(20, 20));

        gridLayout_14->addWidget(checkBox_6, 0, 0, 1, 1);

        lineEdit_12 = new QLineEdit(groupBox_6);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(0, 25));
        lineEdit_12->setStyleSheet(QLatin1String("background:rgb(0, 255, 255);color:rgb(0,0,0);border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));

        gridLayout_14->addWidget(lineEdit_12, 1, 1, 1, 1);

        lineEdit_6 = new QLineEdit(groupBox_6);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setMinimumSize(QSize(0, 25));
        lineEdit_6->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;\n"
""));

        gridLayout_14->addWidget(lineEdit_6, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_14);


        gridLayout_15->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_8, 1, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_6);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider->setMinimum(-25);
        horizontalSlider->setMaximum(25);
        horizontalSlider->setPageStep(1);
        horizontalSlider->setValue(0);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBelow);
        horizontalSlider->setTickInterval(1);

        gridLayout_15->addWidget(horizontalSlider, 2, 0, 1, 2);

        checkBox_curve_show_random = new QCheckBox(groupBox_6);
        checkBox_curve_show_random->setObjectName(QStringLiteral("checkBox_curve_show_random"));

        gridLayout_15->addWidget(checkBox_curve_show_random, 1, 0, 1, 1);

        gridLayout_15->setRowStretch(0, 2);
        gridLayout_15->setColumnStretch(0, 1);

        horizontalLayout_2->addWidget(groupBox_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 4);
        horizontalLayout_2->setStretch(1, 1);

        gridLayout_8->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        widget_dynamic_curve = new QWidget(tab_2);
        widget_dynamic_curve->setObjectName(QStringLiteral("widget_dynamic_curve"));
        widget_dynamic_curve->setMinimumSize(QSize(300, 0));

        gridLayout_8->addWidget(widget_dynamic_curve, 1, 1, 1, 1);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 25));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background:rgb(255, 0, 0);\n"
"border:1px solid gray;\n"
"        width:300px;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 25));
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background:rgb(0, 255, 0);\n"
"border:1px solid gray;\n"
"        width:300px;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 0, 2, 1, 2);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(0, 25));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background:rgb(255, 255, 127);\n"
"border:1px solid gray;\n"
"        width:300px;\n"
"        border-radius:10px;\n"
"        padding:2px 4px;"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 4, 1, 2);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        doubleSpinBox_max_P = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_max_P->setObjectName(QStringLiteral("doubleSpinBox_max_P"));
        doubleSpinBox_max_P->setMinimumSize(QSize(0, 20));
        doubleSpinBox_max_P->setDecimals(1);
        doubleSpinBox_max_P->setMinimum(0);

        gridLayout_6->addWidget(doubleSpinBox_max_P, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 1, 2, 1, 1);

        doubleSpinBox_max_I = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_max_I->setObjectName(QStringLiteral("doubleSpinBox_max_I"));
        doubleSpinBox_max_I->setMinimumSize(QSize(50, 20));
        doubleSpinBox_max_I->setDecimals(2);
        doubleSpinBox_max_I->setMaximum(100);
        doubleSpinBox_max_I->setSingleStep(0.1);

        gridLayout_6->addWidget(doubleSpinBox_max_I, 1, 3, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 1, 4, 1, 1);

        doubleSpinBox_max_D = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_max_D->setObjectName(QStringLiteral("doubleSpinBox_max_D"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(doubleSpinBox_max_D->sizePolicy().hasHeightForWidth());
        doubleSpinBox_max_D->setSizePolicy(sizePolicy1);
        doubleSpinBox_max_D->setMinimumSize(QSize(30, 20));
        doubleSpinBox_max_D->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        doubleSpinBox_max_D->setDecimals(2);
        doubleSpinBox_max_D->setMaximum(100);
        doubleSpinBox_max_D->setSingleStep(0.1);

        gridLayout_6->addWidget(doubleSpinBox_max_D, 1, 5, 1, 1);

        verticalSlider_P = new QSlider(groupBox_5);
        verticalSlider_P->setObjectName(QStringLiteral("verticalSlider_P"));
        verticalSlider_P->setStyleSheet(QLatin1String("handle:vertical{width:13;margin-top:-3;margin-bottom:-3;border-radius:6;background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #FFFFFF,stop:0.8 #4c73a8);}\n"
"        "));
        verticalSlider_P->setMinimum(0);
        verticalSlider_P->setMaximum(1000);
        verticalSlider_P->setSingleStep(10);
        verticalSlider_P->setPageStep(10);
        verticalSlider_P->setValue(0);
        verticalSlider_P->setSliderPosition(0);
        verticalSlider_P->setOrientation(Qt::Vertical);
        verticalSlider_P->setInvertedAppearance(false);

        gridLayout_6->addWidget(verticalSlider_P, 2, 0, 3, 1);

        doubleSpinBox_P = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_P->setObjectName(QStringLiteral("doubleSpinBox_P"));
        doubleSpinBox_P->setMinimumSize(QSize(0, 20));
        doubleSpinBox_P->setDecimals(2);
        doubleSpinBox_P->setMaximum(100);
        doubleSpinBox_P->setSingleStep(0.1);

        gridLayout_6->addWidget(doubleSpinBox_P, 2, 1, 1, 1);

        verticalSlider_I = new QSlider(groupBox_5);
        verticalSlider_I->setObjectName(QStringLiteral("verticalSlider_I"));
        verticalSlider_I->setMinimum(0);
        verticalSlider_I->setMaximum(1000);
        verticalSlider_I->setSingleStep(10);
        verticalSlider_I->setPageStep(10);
        verticalSlider_I->setValue(0);
        verticalSlider_I->setSliderPosition(0);
        verticalSlider_I->setOrientation(Qt::Vertical);
        verticalSlider_I->setInvertedAppearance(false);

        gridLayout_6->addWidget(verticalSlider_I, 2, 2, 3, 1);

        doubleSpinBox_I = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_I->setObjectName(QStringLiteral("doubleSpinBox_I"));
        doubleSpinBox_I->setMinimumSize(QSize(0, 20));
        doubleSpinBox_I->setDecimals(2);
        doubleSpinBox_I->setMaximum(100);
        doubleSpinBox_I->setSingleStep(0.001);

        gridLayout_6->addWidget(doubleSpinBox_I, 2, 3, 1, 1);

        verticalSlider_D = new QSlider(groupBox_5);
        verticalSlider_D->setObjectName(QStringLiteral("verticalSlider_D"));
        verticalSlider_D->setMinimum(0);
        verticalSlider_D->setMaximum(1000);
        verticalSlider_D->setSingleStep(10);
        verticalSlider_D->setPageStep(10);
        verticalSlider_D->setOrientation(Qt::Vertical);

        gridLayout_6->addWidget(verticalSlider_D, 2, 4, 3, 1);

        doubleSpinBox_D = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_D->setObjectName(QStringLiteral("doubleSpinBox_D"));
        doubleSpinBox_D->setMinimumSize(QSize(0, 20));
        QFont font1;
        font1.setPointSize(9);
        doubleSpinBox_D->setFont(font1);
        doubleSpinBox_D->setDecimals(2);
        doubleSpinBox_D->setMaximum(100);
        doubleSpinBox_D->setSingleStep(0.01);

        gridLayout_6->addWidget(doubleSpinBox_D, 2, 5, 1, 1);

        checkBox_P = new QCheckBox(groupBox_5);
        checkBox_P->setObjectName(QStringLiteral("checkBox_P"));
        QFont font2;
        font2.setPointSize(8);
        checkBox_P->setFont(font2);
        checkBox_P->setIconSize(QSize(10, 10));

        gridLayout_6->addWidget(checkBox_P, 3, 1, 1, 1);

        checkBox_I = new QCheckBox(groupBox_5);
        checkBox_I->setObjectName(QStringLiteral("checkBox_I"));
        checkBox_I->setFont(font2);

        gridLayout_6->addWidget(checkBox_I, 3, 3, 1, 1);

        checkBox_D = new QCheckBox(groupBox_5);
        checkBox_D->setObjectName(QStringLiteral("checkBox_D"));
        checkBox_D->setFont(font2);
        checkBox_D->setChecked(false);

        gridLayout_6->addWidget(checkBox_D, 3, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 269, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 269, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 4, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 269, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 4, 5, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 25));
        QFont font3;
        font3.setPointSize(12);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_9, 5, 0, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(0, 25));
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_10, 5, 2, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(0, 25));
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_11, 5, 4, 1, 1);


        gridLayout_8->addWidget(groupBox_5, 1, 0, 1, 1);

        gridLayout_8->setRowStretch(0, 1);
        gridLayout_8->setRowStretch(1, 3);
        gridLayout_8->setColumnStretch(0, 1);
        tabWidget->addTab(tab_2, QString());

        gridLayout_7->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        comboBox_baud->setItemText(0, QApplication::translate("MainWindow", "115200", nullptr));
        comboBox_baud->setItemText(1, QApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baud->setItemText(2, QApplication::translate("MainWindow", "38400", nullptr));

        label_28->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        pushButton_uart_sw->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_uart_rfresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\346\224\266\351\200\211\351\241\271", nullptr));
        radioButton_show_ascii->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\346\230\276\347\244\272", nullptr));
        pushButton_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        radioButton_show_hex->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        pushButton_clean->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\345\217\221\351\200\201\351\200\211\351\241\271", nullptr));
        radioButton_tx_ascii->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\345\217\221\351\200\201", nullptr));
        radioButton_tx_hex->setText(QApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        pushButton_tx->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        pushButton_clean_tx->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\270\270\350\247\204", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        comboBox_baud_2->setItemText(0, QApplication::translate("MainWindow", "115200", nullptr));
        comboBox_baud_2->setItemText(1, QApplication::translate("MainWindow", "9600", nullptr));
        comboBox_baud_2->setItemText(2, QApplication::translate("MainWindow", "38400", nullptr));

        label_31->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        pushButton_uart_sw_2->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButton_uart_rfresh_2->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        checkBox_1->setText(QString());
        lineEdit_7->setText(QApplication::translate("MainWindow", "red", nullptr));
        checkBox_2->setText(QString());
        lineEdit_8->setText(QApplication::translate("MainWindow", "green", nullptr));
        checkBox_3->setText(QString());
        lineEdit_9->setText(QApplication::translate("MainWindow", "blue", nullptr));
        checkBox_4->setText(QString());
        lineEdit_10->setText(QApplication::translate("MainWindow", "yellow", nullptr));
        checkBox_5->setText(QString());
        lineEdit_11->setText(QApplication::translate("MainWindow", "magenta", nullptr));
        checkBox_6->setText(QString());
        lineEdit_12->setText(QApplication::translate("MainWindow", "cyan", nullptr));
        checkBox_curve_show_random->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\347\202\271\346\233\262\347\272\277", nullptr));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "PID\345\217\202\346\225\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "P", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "I", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "D", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "MAX", nullptr));
        checkBox_P->setText(QApplication::translate("MainWindow", "\344\270\272\350\264\237\346\225\260", nullptr));
        checkBox_I->setText(QApplication::translate("MainWindow", "\344\270\272\350\264\237\346\225\260", nullptr));
        checkBox_D->setText(QApplication::translate("MainWindow", "\344\270\272\350\264\237\346\225\260", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "PID\350\260\203\345\217\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
