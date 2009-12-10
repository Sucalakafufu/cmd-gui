/****************************************************************************
** Form interface generated from reading ui file 'about.ui'
**
** Created: Wed Dec 9 22:47:48 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef ABOUT_H
#define ABOUT_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QTextEdit;
class QPushButton;

class About : public QDialog
{
    Q_OBJECT

public:
    About( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~About();

    QTextEdit* about_textEdit;
    QPushButton* about_pushButton;

protected:

protected slots:
    virtual void languageChange();

};

#endif // ABOUT_H
