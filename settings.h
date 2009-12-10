/****************************************************************************
** Form interface generated from reading ui file 'settings.ui'
**
** Created: Wed Dec 9 22:47:47 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SETTINGS_H
#define SETTINGS_H

#include <qvariant.h>
#include <qdialog.h>
#include <qfile.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QFrame;
class QCheckBox;
class QPushButton;

class Settings : public QDialog
{
    Q_OBJECT

public:
    Settings( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Settings();

    QFrame* frame10;
    QCheckBox* open_CMD_checkBox;
    QCheckBox* start_Fire_checkBox;
    QCheckBox* do_nothing_checkBox;
    QFrame* frame9;
    QPushButton* Save;
    QPushButton* Cancel;

public slots:
    virtual void toggleCMD();
    virtual void toggleFire();
    virtual void toggleNothing();

protected:
    QVBoxLayout* frame10Layout;
    QHBoxLayout* frame9Layout;

protected slots:
    virtual void languageChange();

private:
    virtual void init();

};

#endif // SETTINGS_H
