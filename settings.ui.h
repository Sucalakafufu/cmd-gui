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

void Settings::init()
{
	bool set1, set2, set3;
	set1=set2=set3=false;
	QFile file("settings.cfg");	
	QTextStream streamer(&file);
	QStringList lines;
	QString temp;
	file.open(IO_ReadOnly);
	set1 = streamer.readLine().toInt();
	set2 = streamer.readLine().toInt();
	set3 = streamer.readLine().toInt();
	file.close();
	if (set1)
	{
		open_CMD_checkBox->setChecked(true);
		system("START CMD");
	}
	else
		open_CMD_checkBox->setChecked(false);
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

void Settings::toggleCMD()
{
	if (open_CMD_checkBox->isChecked())
		do_nothing_checkBox->setChecked(false);
}

void Settings::toggleFire()
{

}

void Settings::toggleNothing()
{

}
