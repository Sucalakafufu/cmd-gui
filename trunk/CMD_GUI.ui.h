/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qstatusbar.h>
#include <windows.h>
#include <iostream>
//#include <fcntl.h>
//#include <io.h>
#include <string>

void CMD_GUI::init() //called in constructor
{
	settings = new Settings(this,0,true,0); //create new settings dialog and about dialog 
	about = new About(this,0,true,0);
	FreeConsole(); AllocConsole();
	AttachConsole(GetCurrentProcessId());
	/*int inHandle = _open_osfhandle((long)GetStdHandle(STD_INPUT_HANDLE), _O_TEXT );
	FILE *inOpenHandle = _fdopen( inHandle, "r" );
	*stdin = *inOpenHandle;*/
}

void CMD_GUI::showSettings() //show settings dialog
{
	settings->show();
}

void CMD_GUI::openCMD() //start CMD Prompt
{
	system("START CMD");
}

void CMD_GUI::showAbout() //show about dialog
{
	about->show();
}


void CMD_GUI::startFF() //function to start firefox
{
	system("START firefox");
}


void CMD_GUI::cmdNone()
{//Make sure only one radio is on at a time
	if(dir_radioButton->isOn())
		dir_radioButton->toggle();
	if(start_radioButton->isOn())
		start_radioButton->toggle();
	if(!none_radioButton->isOn() && !start_radioButton->isOn() && !dir_radioButton->isOn())
		none_radioButton->toggle();

	//Put in command box
	display_command_lineEdit->clear();
}


void CMD_GUI::cmdDisplay()
{//Make sure only one radio is on at a time
	if(none_radioButton->isOn())
		none_radioButton->toggle();
	if(start_radioButton->isOn())
		start_radioButton->toggle();
	if(!none_radioButton->isOn() && !start_radioButton->isOn() && !dir_radioButton->isOn())
		dir_radioButton->toggle();

	//Put in command box
	display_command_lineEdit->setText("DIR");
}


void CMD_GUI::cmdStart()
{//Make sure only one radio is on at a time
	if(dir_radioButton->isOn())
		dir_radioButton->toggle();
	if(none_radioButton->isOn())
		none_radioButton->toggle();
	if(!none_radioButton->isOn() && !start_radioButton->isOn() && !dir_radioButton->isOn())
		start_radioButton->toggle();

	//Put in command box
	display_command_lineEdit->setText("START <file.exe>");
}


void CMD_GUI::sendCommand()
{
	if (!CMD_lineEdit->text().isEmpty())
		system(CMD_lineEdit->text().latin1()); //figure out how to send this and keep a command line open
	std::string test;
	/*while ()
	{
		commands->setText(tr(test.c_str()));
	}*/
	//TODO: Have lineEdit go to cmd
	//Remembers line in combo box, max size is 10.
	lastTen_comboBox->setMaxCount(8);
	lastTen_comboBox->insertItem(CMD_lineEdit->text(), 0);
	//TODO: Have lineEdit go to QTextBrowser commands
	//Clears command line
	CMD_lineEdit->clear();
}


void CMD_GUI::comHelpSend()
{
	CMD_lineEdit->clear();
	CMD_lineEdit->setText(display_command_lineEdit->text());
}


void CMD_GUI::lastTenSend()
{
	CMD_lineEdit->clear();
	CMD_lineEdit->setText(lastTen_comboBox->currentText());
}


void CMD_GUI::lastTenClear()
{
	lastTen_comboBox->clear();
}
