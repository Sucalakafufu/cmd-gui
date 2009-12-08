/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qstatusbar.h>

void CMD_GUI::init()
{
	settings = new Settings(this,0,true,0);
	about = new About(this,0,true,0);
}

void CMD_GUI::showSettings()
{
	settings->setFixedSize(188,129);
	settings->show();
}

void CMD_GUI::openCMD()
{
	system("START CMD");
}

void CMD_GUI::showAbout()
{
	about->setFixedSize(188,129);
	about->show();
}
