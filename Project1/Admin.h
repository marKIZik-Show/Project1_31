#pragma once
#include "Comercial.h"
#include "FreeSoft.h"
#include "Shareware.h"
#include <vector>
#include <fstream>
class Admin
{
	vector<Soft*> admin;
public:
	Admin();
	~Admin();

	void addSoft(Soft* soft);
	void delSoft(int id);
	void showList()const;
};

