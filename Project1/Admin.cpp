#include "Admin.h"

Admin::Admin()
{
	ifstream file("info-soft.txt");
	if (file.is_open()) {
		string type;

		while (!file.eof()) {
			getline(file, type);
			if (type == "Free") {
				Soft* obj = new FreeSoft();
				obj->load(file);
				admin.push_back(obj);
			}
			else if (type == "ShareWare") {
				Soft* obj = new SareWare();
				obj->load(file);
				admin.push_back(obj);
			}
			else if (type == "Commercial") {
				Soft* obj = new Comercial();
				obj->load(file);
				admin.push_back(obj);
			}
		}
		file.close();
	}
}


Admin::~Admin()
{
	for (int i = 0; i < admin.size(); i++)
	{
		delete admin[i];
	}
}

void Admin::addSoft(Soft* soft)
{
	if (soft != nullptr) {
		admin.push_back(soft);
	}
}

void Admin::delSoft(int id)
{
	if (id > 0 && id <= admin.size()) {
		delete admin[id - 1];
		admin.erase(admin.begin() + id - 1);
	}
}

void Admin::showList() const
{
	for (int i = 0; i < admin.size(); i++)
	{
		cout << "\t#" << i + 1 << endl;
		admin[i]->showInfo();
		cout << endl;
	}
}
