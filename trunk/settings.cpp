/****************************************************************************
** Form implementation generated from reading ui file 'settings.ui'
**
** Created: Wed Dec 9 22:47:48 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "settings.h"

#include <qvariant.h>
#include <qframe.h>
#include <qcheckbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "settings.ui.h"

/*
 *  Constructs a Settings as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Settings::Settings( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "Settings" );

    frame10 = new QFrame( this, "frame10" );
    frame10->setGeometry( QRect( 10, 0, 153, 91 ) );
    frame10->setFrameShape( QFrame::StyledPanel );
    frame10->setFrameShadow( QFrame::Raised );
    frame10Layout = new QVBoxLayout( frame10, 11, 6, "frame10Layout"); 

    open_CMD_checkBox = new QCheckBox( frame10, "open_CMD_checkBox" );
    frame10Layout->addWidget( open_CMD_checkBox );

    start_Fire_checkBox = new QCheckBox( frame10, "start_Fire_checkBox" );
    frame10Layout->addWidget( start_Fire_checkBox );

    do_nothing_checkBox = new QCheckBox( frame10, "do_nothing_checkBox" );
    do_nothing_checkBox->setChecked( TRUE );
    frame10Layout->addWidget( do_nothing_checkBox );

    frame9 = new QFrame( this, "frame9" );
    frame9->setGeometry( QRect( 0, 80, 192, 47 ) );
    frame9->setFrameShape( QFrame::StyledPanel );
    frame9->setFrameShadow( QFrame::Raised );
    frame9Layout = new QHBoxLayout( frame9, 11, 6, "frame9Layout"); 

    Save = new QPushButton( frame9, "Save" );
    frame9Layout->addWidget( Save );

    Cancel = new QPushButton( frame9, "Cancel" );
    frame9Layout->addWidget( Cancel );
    languageChange();
    resize( QSize(188, 125).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( Cancel, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( Save, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( do_nothing_checkBox, SIGNAL( clicked() ), this, SLOT( toggleNothing() ) );
    connect( open_CMD_checkBox, SIGNAL( clicked() ), this, SLOT( toggleCMD() ) );
    connect( start_Fire_checkBox, SIGNAL( clicked() ), this, SLOT( toggleFire() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
Settings::~Settings()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Settings::languageChange()
{
    setCaption( tr( "Settings" ) );
    open_CMD_checkBox->setText( tr( "Open CMD At Startup" ) );
    start_Fire_checkBox->setText( tr( "Start Firefox At Startup" ) );
    do_nothing_checkBox->setText( tr( "Do Nothing At Startup" ) );
    Save->setText( tr( "Save" ) );
    Cancel->setText( tr( "Cancel" ) );
}

