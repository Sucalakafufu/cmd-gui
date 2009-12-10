/****************************************************************************
** Form implementation generated from reading ui file 'CMD_GUI.ui'
**
** Created: Wed Dec 9 22:47:49 2009
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "CMD_GUI.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qcombobox.h>
#include <qgroupbox.h>
#include <qradiobutton.h>
#include <qlabel.h>
#include <qframe.h>
#include <qlineedit.h>
#include <qtextbrowser.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include "CMD_GUI.ui.h"

/*
 *  Constructs a CMD_GUI as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
CMD_GUI::CMD_GUI( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "CMD_GUI" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 1, sizePolicy().hasHeightForWidth() ) );
    setMinimumSize( QSize( 21, 168 ) );
    setMaximumSize( QSize( 458, 444 ) );
    setBaseSize( QSize( 458, 444 ) );
    setCursor( QCursor( 2 ) );
    setDockWindowsMovable( FALSE );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );

    comboBox = new QComboBox( FALSE, centralWidget(), "comboBox" );
    comboBox->setGeometry( QRect( 260, 300, 170, 20 ) );

    Commands_groupBox = new QGroupBox( centralWidget(), "Commands_groupBox" );
    Commands_groupBox->setGeometry( QRect( 260, 20, 171, 100 ) );
    Commands_groupBox->setColumnLayout(0, Qt::Vertical );
    Commands_groupBox->layout()->setSpacing( 6 );
    Commands_groupBox->layout()->setMargin( 11 );
    Commands_groupBoxLayout = new QVBoxLayout( Commands_groupBox->layout() );
    Commands_groupBoxLayout->setAlignment( Qt::AlignTop );

    start_radioButton = new QRadioButton( Commands_groupBox, "start_radioButton" );
    Commands_groupBoxLayout->addWidget( start_radioButton );

    dir_radioButton = new QRadioButton( Commands_groupBox, "dir_radioButton" );
    Commands_groupBoxLayout->addWidget( dir_radioButton );

    none_radioButton = new QRadioButton( Commands_groupBox, "none_radioButton" );
    none_radioButton->setChecked( TRUE );
    Commands_groupBoxLayout->addWidget( none_radioButton );

    generated_command_Label = new QLabel( centralWidget(), "generated_command_Label" );
    generated_command_Label->setGeometry( QRect( 260, 130, 47, 14 ) );

    comboBox_Label = new QLabel( centralWidget(), "comboBox_Label" );
    comboBox_Label->setGeometry( QRect( 260, 269, 117, 14 ) );

    send_frame = new QFrame( centralWidget(), "send_frame" );
    send_frame->setGeometry( QRect( 10, 350, 330, 45 ) );
    send_frame->setFrameShape( QFrame::StyledPanel );
    send_frame->setFrameShadow( QFrame::Raised );
    send_frameLayout = new QHBoxLayout( send_frame, 11, 6, "send_frameLayout"); 

    CMD_lineEdit = new QLineEdit( send_frame, "CMD_lineEdit" );
    send_frameLayout->addWidget( CMD_lineEdit );

    CMD_pushButton = new QPushButton( send_frame, "CMD_pushButton" );
    send_frameLayout->addWidget( CMD_pushButton );

    enter_command_label = new QLabel( centralWidget(), "enter_command_label" );
    enter_command_label->setGeometry( QRect( 20, 340, 75, 14 ) );

    display_command_lineEdit = new QLineEdit( centralWidget(), "display_command_lineEdit" );
    display_command_lineEdit->setGeometry( QRect( 260, 150, 170, 20 ) );
    display_command_lineEdit->setCursor( QCursor( 0 ) );
    display_command_lineEdit->setReadOnly( TRUE );

    CMD_frame = new QFrame( centralWidget(), "CMD_frame" );
    CMD_frame->setGeometry( QRect( 10, 0, 240, 340 ) );
    CMD_frame->setFrameShape( QFrame::StyledPanel );
    CMD_frame->setFrameShadow( QFrame::Raised );
    CMD_frameLayout = new QVBoxLayout( CMD_frame, 11, 6, "CMD_frameLayout"); 

    CMD_label = new QLabel( CMD_frame, "CMD_label" );
    CMD_frameLayout->addWidget( CMD_label );

    commands = new QTextBrowser( CMD_frame, "commands" );
    CMD_frameLayout->addWidget( commands );

    // actions
    fileQuitAction = new QAction( this, "fileQuitAction" );
    optionsSettingsAction = new QAction( this, "optionsSettingsAction" );
    fileOpen_CMDAction = new QAction( this, "fileOpen_CMDAction" );
    helpAboutAction = new QAction( this, "helpAboutAction" );
    ActionGroup = new QActionGroup( this, "ActionGroup" );
    ActionGroup->setUsesDropDown( TRUE );


    // toolbars


    // menubar
    MenuBarEditor = new QMenuBar( this, "MenuBarEditor" );

    MenuBarEditor->setGeometry( QRect( 0, 0, 458, 29 ) );

    FileMenu = new QPopupMenu( this );
    fileOpen_CMDAction->addTo( FileMenu );
    FileMenu->insertSeparator();
    fileQuitAction->addTo( FileMenu );
    MenuBarEditor->insertItem( QString(""), FileMenu, 2 );

    OptionsMenu = new QPopupMenu( this );
    optionsSettingsAction->addTo( OptionsMenu );
    MenuBarEditor->insertItem( QString(""), OptionsMenu, 3 );

    HelpMenu = new QPopupMenu( this );
    helpAboutAction->addTo( HelpMenu );
    MenuBarEditor->insertItem( QString(""), HelpMenu, 4 );

    languageChange();
    resize( QSize(458, 444).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fileQuitAction, SIGNAL( activated() ), this, SLOT( close() ) );
    connect( optionsSettingsAction, SIGNAL( activated() ), this, SLOT( showSettings() ) );
    connect( fileOpen_CMDAction, SIGNAL( activated() ), this, SLOT( openCMD() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( showAbout() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
CMD_GUI::~CMD_GUI()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CMD_GUI::languageChange()
{
    setCaption( tr( "CMD GUI" ) );
    Commands_groupBox->setTitle( tr( "Display Commands" ) );
    start_radioButton->setText( tr( "Start Program" ) );
    dir_radioButton->setText( tr( "Display Directory Contents" ) );
    none_radioButton->setText( tr( "None" ) );
    generated_command_Label->setText( tr( "Command" ) );
    comboBox_Label->setText( tr( "Last 10 Sent Commands" ) );
    CMD_pushButton->setText( tr( "Send Command" ) );
    enter_command_label->setText( tr( "Enter Command" ) );
    CMD_label->setText( tr( "CMD Output" ) );
    commands->setText( QString::null );
    fileQuitAction->setText( QString::null );
    fileQuitAction->setMenuText( tr( "&Quit" ) );
    fileQuitAction->setStatusTip( tr( "Quits The Program" ) );
    fileQuitAction->setAccel( tr( "Ctrl+Q" ) );
    optionsSettingsAction->setText( QString::null );
    optionsSettingsAction->setMenuText( tr( "&Settings" ) );
    optionsSettingsAction->setStatusTip( tr( "Opens Settings Dialog" ) );
    optionsSettingsAction->setAccel( tr( "Ctrl+." ) );
    fileOpen_CMDAction->setText( QString::null );
    fileOpen_CMDAction->setMenuText( tr( "&Open CMD" ) );
    fileOpen_CMDAction->setToolTip( QString::null );
    fileOpen_CMDAction->setStatusTip( tr( "Opens A New CMD Prompt" ) );
    fileOpen_CMDAction->setAccel( tr( "Ctrl+O" ) );
    helpAboutAction->setText( QString::null );
    helpAboutAction->setMenuText( tr( "&About" ) );
    helpAboutAction->setStatusTip( tr( "Tells About This Program" ) );
    ActionGroup->setText( tr( "ActionGroup" ) );
    MenuBarEditor->findItem( 2 )->setText( tr( "&File" ) );
    MenuBarEditor->findItem( 3 )->setText( tr( "&Options" ) );
    MenuBarEditor->findItem( 4 )->setText( tr( "&Help" ) );
}

