#include <QtGui>

#include "finddialog.h"
#include "gotocelldialog.h"
#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include "sortdialog.h"
#include "spreadsheet.h"



MainWindow::MainWindow(){
    spreadsheet = new Spreadsheet();
    setCentralWidget(spreadsheet);
    
    createActions();
    createMenus();
    createToolBars();
    createStatusBar();
    createContextMenu();
    
    readingSettings();
    
    findDialog = 0;
    
    setWindowIcon(QIcon(":/images/icon"));
    setCurrentFile("");
}//endofMainWindow

void MainWindow::createActions(){
    newAction = new QAction(tr("&New"), this);
    newAction ->setIcon((":/images/new.png"));
    newAction ->setShortcut(QKeySequence::New);
    newAction ->setStatusTip(tr("Create a new spreadsheet file"));
    connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));
    
    for(int i = 0; i < MaxRecentFiles; ++)
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}//end of createActions()
