#pragma once
#include "Soft.h"
#include "Date.h"
class SareWare: public Soft
{
protected:
	Date install;
	int days;
public:
	SareWare();
	SareWare(string name, string company, Date install, int days);

	void setInstall(Date install);
	void setDays(int days);

	Date getInstall()const;
	int geTdAYS()const;

	void showInfo() const override {
		cout << "Name: " << name << endl;
		cout << "Company: " << company << endl;
		cout << "Date: " << install << endl;
		cout << "Days: " << days << endl;
	}
	bool isCheck()const override { return install + days > Date(); };
};