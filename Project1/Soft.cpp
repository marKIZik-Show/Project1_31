#include "soft.h"

Soft::Soft()
{
	name = "NoName";
	company = "NoCompany";
}

Soft::Soft(string name, string company)
{
	this->company = company;
	this->name = name;
}

Soft::~Soft()
{
}

void Soft::setName(string name)
{
	this->name = name;
}

void Soft::setCompany(string company)
{
	this->company = company;
}

string Soft::getName() const
{
	return this->name;
}

string Soft::getCompany() const
{
	return this->company;
}
