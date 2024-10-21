#pragma once
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;
class Soft
{
protected:
	string name;
	string company;
public:
	Soft();
	Soft(string name, string company);
	virtual ~Soft() = 0;

	void setName(string name) ;
	void setCompany(string company);

	string getName() const;
	string getCompany() const;

	virtual void showInfo() const = 0;
	virtual bool isCheck() const = 0;
};

