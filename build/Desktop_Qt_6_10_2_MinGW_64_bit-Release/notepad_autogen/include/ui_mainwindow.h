/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOPen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionZoom;
    QAction *actionStatusbar;
    QAction *actionWord_wrap;
    QAction *actioncut;
    QAction *actioncopy;
    QAction *actionpaste;
    QAction *actionundo;
    QAction *actionredo;
    QAction *actionfont;
    QAction *actionfont_color;
    QAction *actionbackground_color;
    QAction *actionAbout;
    QAction *actionabout;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuedit;
    QMenu *menuview;
    QMenu *menufile;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        actionOPen = new QAction(MainWindow);
        actionOPen->setObjectName("actionOPen");
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        actionZoom = new QAction(MainWindow);
        actionZoom->setObjectName("actionZoom");
        actionStatusbar = new QAction(MainWindow);
        actionStatusbar->setObjectName("actionStatusbar");
        actionWord_wrap = new QAction(MainWindow);
        actionWord_wrap->setObjectName("actionWord_wrap");
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName("actioncut");
        actioncopy = new QAction(MainWindow);
        actioncopy->setObjectName("actioncopy");
        actionpaste = new QAction(MainWindow);
        actionpaste->setObjectName("actionpaste");
        actionundo = new QAction(MainWindow);
        actionundo->setObjectName("actionundo");
        actionredo = new QAction(MainWindow);
        actionredo->setObjectName("actionredo");
        actionfont = new QAction(MainWindow);
        actionfont->setObjectName("actionfont");
        actionfont_color = new QAction(MainWindow);
        actionfont_color->setObjectName("actionfont_color");
        actionbackground_color = new QAction(MainWindow);
        actionbackground_color->setObjectName("actionbackground_color");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName("actionabout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuedit = new QMenu(menubar);
        menuedit->setObjectName("menuedit");
        menuview = new QMenu(menubar);
        menuview->setObjectName("menuview");
        menufile = new QMenu(menubar);
        menufile->setObjectName("menufile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuedit->menuAction());
        menubar->addAction(menuview->menuAction());
        menuedit->addAction(actioncut);
        menuedit->addAction(actioncopy);
        menuedit->addAction(actionpaste);
        menuedit->addAction(actionundo);
        menuedit->addAction(actionredo);
        menuedit->addAction(actionfont);
        menuedit->addAction(actionfont_color);
        menuedit->addAction(actionbackground_color);
        menuview->addAction(actionZoom);
        menuview->addAction(actionStatusbar);
        menuview->addAction(actionWord_wrap);
        menuview->addAction(actionAbout);
        menuview->addAction(actionabout);
        menufile->addAction(actionNew);
        menufile->addAction(actionOPen);
        menufile->addAction(actionClose);
        menufile->addAction(actionSave);
        menufile->addAction(actionSave_as);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOPen->setText(QCoreApplication::translate("MainWindow", "OPen", nullptr));
#if QT_CONFIG(shortcut)
        actionOPen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom->setText(QCoreApplication::translate("MainWindow", "Zoom", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStatusbar->setText(QCoreApplication::translate("MainWindow", "Statusbar", nullptr));
        actionWord_wrap->setText(QCoreApplication::translate("MainWindow", "Word wrap", nullptr));
#if QT_CONFIG(shortcut)
        actionWord_wrap->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actioncut->setText(QCoreApplication::translate("MainWindow", "cut", nullptr));
#if QT_CONFIG(shortcut)
        actioncut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actioncopy->setText(QCoreApplication::translate("MainWindow", "copy", nullptr));
#if QT_CONFIG(shortcut)
        actioncopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionpaste->setText(QCoreApplication::translate("MainWindow", "paste", nullptr));
#if QT_CONFIG(shortcut)
        actionpaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionundo->setText(QCoreApplication::translate("MainWindow", "undo", nullptr));
#if QT_CONFIG(shortcut)
        actionundo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionredo->setText(QCoreApplication::translate("MainWindow", "redo", nullptr));
#if QT_CONFIG(shortcut)
        actionredo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionfont->setText(QCoreApplication::translate("MainWindow", "font", nullptr));
#if QT_CONFIG(shortcut)
        actionfont->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionfont_color->setText(QCoreApplication::translate("MainWindow", "font color", nullptr));
#if QT_CONFIG(shortcut)
        actionfont_color->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionbackground_color->setText(QCoreApplication::translate("MainWindow", "background color", nullptr));
#if QT_CONFIG(shortcut)
        actionbackground_color->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", " Abour file", nullptr));
        actionabout->setText(QCoreApplication::translate("MainWindow", "about", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9.75pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        menuedit->setTitle(QCoreApplication::translate("MainWindow", "edit", nullptr));
        menuview->setTitle(QCoreApplication::translate("MainWindow", "view", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "file", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
