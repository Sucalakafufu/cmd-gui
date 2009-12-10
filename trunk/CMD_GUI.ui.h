/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qstatusbar.h>

void CMD_GUI::init() //called in constructor
{
	settings = new Settings(this,0,true,0); //create new settings dialog and about dialog 
	about = new About(this,0,true,0);
}

void CMD_GUI::showSettings() //set fixed size and show settings dialog
{
	settings->setFixedSize(188,129);
	settings->show();
}

void CMD_GUI::openCMD() //start CMD Prompt
{
	system("START CMD");
}

void CMD_GUI::showAbout() //set fixed size and show about dialog
{
	about->setFixedSize(188,129);
	about->show();
}


void CMD_GUI::startFF() //function to start firefox
{
	system("start firefox");
}


void CMD_GUI::cmdNone()
{
	if(dir_radioButton->isOn())
		dir_radioButton->toggle();
	if(start_radioButton->isOn())
		start_radioButton->toggle();
	if(!none_radioButton->isOn())
		none_radioButton->toggle();
}
