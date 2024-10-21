#pragma once
#include "Soft.h"
class FreeSoft:public Soft

{
public:
	FreeSoft() { name = "None"; company = "None"; };
	FreeSoft(string name, string company) { this->name; this->company = company; };

	void showInfo() const override {
		cout << "Name: " << name << endl;
		cout << "Company: " << company << endl;
	};
	bool isCheck()const override { return true; };
};

