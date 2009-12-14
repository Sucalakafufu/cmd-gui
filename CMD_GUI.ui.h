/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qstatusbar.h>
#include <qtextstream.h>
#include <qfile.h>
#include <qdir.h>
#include <qstring.h>
#include <windows.h>
#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <string>
#include <stdlib.h>
#include <conio.h>

int inHandle;
FILE *inOpenHandle;

void CMD_GUI::init() //called in constructor
{
	settings = new Settings(this,0,true,0); //create new settings dialog and about dialog 
	about = new About(this,0,true,0);
	QDir path;
	QString cPath=path.absPath();
	QFile file("settings.cfg");	
	QTextStream streamer(&file);
	if (file.exists())
	{
		file.open(IO_ReadOnly);
		bool pwd=streamer.readLine().toInt();
		if (pwd)
		{
			QString pathDis="Current Directory:\n"+cPath;
			commands->setText(pathDis);
		}
	}
	FreeConsole(); AllocConsole();
	AttachConsole(GetCurrentProcessId());
	QString hidePath="cmdow \""+cPath+"\\Debug\\CMD_GUI.exe\"";
	std::string test;
	std::string convert=hidePath.latin1();
	for (unsigned int count=0;count<convert.size();count++)
	{
		if (*(convert.begin()+count)=='/')
			*(convert.begin()+count)='\\';
	}
	convert=convert+" /hid";
	test="echo "+convert;
	system(test.c_str());
	system(convert.c_str());
	CMD_lineEdit->setFocus();
	inHandle = _open_osfhandle((long)GetStdHandle(STD_INPUT_HANDLE), _O_TEXT );
	inOpenHandle = _fdopen( inHandle, "r" );
	*stdin = *inOpenHandle;
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
	{
		system(CMD_lineEdit->text().latin1()); //figure out how to send this and keep a command line open
		std::string test, buffer;

		char c; std::string trying;
		while (c = std::cin.peek())
		{
			trying=trying+c;
		}

		test = commands->text().latin1(); buffer=CMD_lineEdit->text().latin1();
		if (!commands->text().isEmpty())
			test=test+"\n";
		test=test+trying;
		//test=test+buffer;
		commands->setText(test.c_str());

		/*TCHAR buffer[20];
		COORD coord = {0, 0};
		DWORD nRead;

		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		ReadConsoleOutputCharacter(hConsole, buffer, 19, coord, &nRead);
		
		int BUFFER_SIZE=100;
		size_t count;
		char    *pMBBuffer = (char *)malloc( BUFFER_SIZE );
		TCHAR *pWCBuffer = buffer;
		count = wcstombs(pMBBuffer, pWCBuffer, BUFFER_SIZE );
		commands->setText(pMBBuffer);
		free(pMBBuffer);*/
	}

	/*HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD bufferSize={5,5};
	COORD bufferStart;
	PSMALL_RECT rect;
	CHAR_INFO *buffer;
	buffer = (CHAR_INFO *) malloc(25 * 80 * sizeof(CHAR_INFO));
	ReadConsoleOutput(hStdout, buffer,bufferSize,bufferStart,rect);*/
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
