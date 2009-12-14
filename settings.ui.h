/****************************************************************************
** ui.h extension file, included from the uic-generated form implementation.
**
** If you wish to add, delete or rename functions or slots use
** Qt Designer which will update this file, preserving your code. Create an
** init() function in place of a constructor, and a destroy() function in
** place of a destructor.
*****************************************************************************/
#include <qtextstream.h>
#include <qstringlist.h>
#include <qfile.h>

bool set1, set2, set3;

void Settings::init()
{	
	set1=set2=set3=false;
	QFile file("settings.cfg");	
	QTextStream streamer(&file);
	QStringList lines;
	QString temp;
	if (file.exists())
	{
		file.open(IO_ReadOnly);
		set1 = streamer.readLine().toInt();
		set2 = streamer.readLine().toInt();
		set3 = streamer.readLine().toInt();
		if (set1)
		{
			display_PWD_checkBox->setChecked(true);
		}
		else
			display_PWD_checkBox->setChecked(false);
		if (set2)
		{
			start_Fire_checkBox->setChecked(true);
			system("START firefox");
		}
		else
			start_Fire_checkBox->setChecked(false);
		if (set3)
			do_nothing_checkBox->setChecked(true);
		else
			do_nothing_checkBox->setChecked(false);
	}
	else
	{
		set3=true;
		display_PWD_checkBox->setChecked(false);
		start_Fire_checkBox->setChecked(false);
		do_nothing_checkBox->setChecked(true);
	}
	file.close();	
}

void Settings::toggleCMD()
{
	if (display_PWD_checkBox->isChecked())
	{
		set1=true;
		set3=false;
		do_nothing_checkBox->setChecked(false);
	}
	else if (!start_Fire_checkBox->isChecked() && !do_nothing_checkBox->isChecked())
	{
		set3=true;
		set1=set2=false;
		do_nothing_checkBox->setChecked(true);
	}
}

void Settings::toggleFire()
{
	if (start_Fire_checkBox->isChecked())
	{
		set2=true;
		set3=false;
		do_nothing_checkBox->setChecked(false);
	}
	else if (!display_PWD_checkBox->isChecked() && !do_nothing_checkBox->isChecked())
	{
		set3=true;
		set1=set2=false;
		do_nothing_checkBox->setChecked(true);
	}
}

void Settings::toggleNothing()
{
	if (do_nothing_checkBox->isChecked())
	{
		set3=true;
		set1=set2=false;
		display_PWD_checkBox->setChecked(false);
		start_Fire_checkBox->setChecked(false);
	}
	else if (!start_Fire_checkBox->isChecked() && !display_PWD_checkBox->isChecked())
	{
		set3=true;
		set1=set2=false;
		do_nothing_checkBox->setChecked(true);
	}
}


void Settings::saveSettings()
{
	QFile saving("settings.cfg");
	QTextStream streamer(&saving);
	saving.open(IO_WriteOnly);
	streamer << set1 << endl;
	streamer << set2 << endl;
	streamer << set3 << endl;
	saving.close();
}
