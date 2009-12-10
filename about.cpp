/****************************************************************************
** Form implementation generated from reading ui file 'about.ui'
**
** Created: Wed Dec 9 22:47:48 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "about.h"

#include <qvariant.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a About as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
About::About( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "About" );

    about_textEdit = new QTextEdit( this, "about_textEdit" );
    about_textEdit->setGeometry( QRect( 10, 10, 168, 80 ) );
    about_textEdit->setWordWrap( QTextEdit::WidgetWidth );
    about_textEdit->setReadOnly( TRUE );

    about_pushButton = new QPushButton( this, "about_pushButton" );
    about_pushButton->setGeometry( QRect( 50, 100, 82, 25 ) );
    languageChange();
    resize( QSize(187, 134).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( about_pushButton, SIGNAL( clicked() ), this, SLOT( close() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
About::~About()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void About::languageChange()
{
    setCaption( tr( "About" ) );
    about_textEdit->setText( tr( "<p align=\"center\">CMD GUI Alpha Release 0.1</p>\n"
"<p align=\"center\">To Help Those With Less Knowledge of the CMD Prompt.</p>" ) );
    about_pushButton->setText( tr( "OK" ) );
}

