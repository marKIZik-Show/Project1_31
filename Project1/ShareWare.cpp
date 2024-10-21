#include "ShareWare.h"

SareWare::SareWare()
{
	days = 0;
}

SareWare::SareWare(string name, string company, Date install, int days): Soft(name, company)
{
	this->install = install;
	this->days = days;
}

void SareWare::setInstall(Date install)
{
	this->install = install;
}

void SareWare::setDays(int days)
{
	this->days = days;
}

Date SareWare::getInstall() const
{
	return install;
}

int SareWare::geTdAYS() const
{
	return days;
}
