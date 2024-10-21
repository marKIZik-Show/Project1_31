#include "Soft.h"
#include "FreeSoft.h"
#include "ShareWare.h"
int main() {
	//Soft a("Telegram", "Dorov");
	FreeSoft b("Spotify", "Spotify AB");
	b.showInfo();

	SareWare c("Photoshop", "Adobe", Date(1,9,2000), 30);
	c.showInfo();
	cout << "Is check: " << c.isCheck()<<endl;
}