/****************************************************************************
** Form interface generated from reading ui file 'CMD_GUI.ui'
**
** Created: Wed Dec 9 22:47:49 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CMD_GUI_H
#define CMD_GUI_H

#include <qvariant.h>
#include <qmainwindow.h>
#include "settings.h"
#include "about.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QComboBox;
class QGroupBox;
class QRadioButton;
class QLabel;
class QFrame;
class QLineEdit;
class QPushButton;
class QTextBrowser;

class CMD_GUI : public QMainWindow
{
    Q_OBJECT

public:
    CMD_GUI( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~CMD_GUI();

    QComboBox* comboBox;
    QGroupBox* Commands_groupBox;
    QRadioButton* start_radioButton;
    QRadioButton* dir_radioButton;
    QRadioButton* none_radioButton;
    QLabel* generated_command_Label;
    QLabel* comboBox_Label;
    QFrame* send_frame;
    QLineEdit* CMD_lineEdit;
    QPushButton* CMD_pushButton;
    QLabel* enter_command_label;
    QLineEdit* display_command_lineEdit;
    QFrame* CMD_frame;
    QLabel* CMD_label;
    QTextBrowser* commands;
    QMenuBar *MenuBarEditor;
    QPopupMenu *FileMenu;
    QPopupMenu *OptionsMenu;
    QPopupMenu *HelpMenu;
    QAction* fileQuitAction;
    QAction* optionsSettingsAction;
    QAction* fileOpen_CMDAction;
    QAction* helpAboutAction;
    QActionGroup* ActionGroup;

public slots:
    virtual void showSettings();
    virtual void openCMD();
    virtual void showAbout();
    virtual void startFF();

protected:
    QVBoxLayout* Commands_groupBoxLayout;
    QHBoxLayout* send_frameLayout;
    QVBoxLayout* CMD_frameLayout;

protected slots:
    virtual void languageChange();

private:
    Settings *settings;
    About *about;

    void init();

};

#endif // CMD_GUI_H
