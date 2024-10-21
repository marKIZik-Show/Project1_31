#include "Soft.h"
#include "FreeSoft.h"
#include "ShareWare.h"
#include "Comercial.h"
#include "Admin.h"
int main() {
	//Soft a("Telegram", "Dorov");
	//FreeSoft b("Spotify", "Spotify AB");
	//b.showInfo();

	//SareWare c("Photoshop", "Adobe", Date(1,9,2000), 30);
	//c.showInfo();
	//cout << "Is check: " << c.isCheck()<<endl;

	//Comercial d("Spotify Premium", "Spotify AB", Date(), 30, 645);
	//d.showInfo();

	Admin i;
	i.addSoft(new FreeSoft("Spotify", "Spotify AB"));
	i.addSoft(new SareWare("Photoshop", "Adobe", Date(1, 9, 2000), 30));
	i.addSoft(new Comercial("Spotify Premium", "Spotify AB", Date(), 30, 645));
	i.showList();
}