#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QLabel;
class FindDialog;
class Spreadsheet;

    
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void goToCell();
    void newFile();
    void open();
    void find();
    void sort();
    void about();
    bool save();
    bool saveAs();

    void openRecentFile();
    void updateStatusBar();
    void spreadsheetModified();

private:
    void createActions();
    void createMenus();
    void createContextMenu();
    void createToolBars();
    void createStatusBar();
    void readSettings();
    void writeSettings();
    void updateRecentFileActions();
    void setCurrentFile(const QString &filename);
    bool okToContinue();
    bool saveFile(const QString &filename);
    bool loadFile(const QString &filename);
    QString strippedName(const QString &fullFileName);

    Spreadsheet *spreadsheet;
    FindDialog findDialog;
    QLabel locationLabel;
    QLabel formulaLabel;
    QStringList recentFiles;
    QString curFile;

    enum { MaxRecentFiles = 5};
    QAction seperatorAction;
    QAction recentFileActions[MaxRecentFiles];

    QMenu fileMenu;
    QMenu editMenu;

    QToolBar editToolBar;
    QToolBar fileToolBar;
    QAction openAction;
    QAction newAction;

    QAction aboutQtAction;

//private:
//    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
