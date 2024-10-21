#pragma once
#include <fstream>
#include "ShareWare.h"
class Comercial :
    public SareWare
{
protected:
    float price;
public:
    Comercial() { price = 0; };
    Comercial(string name, string company, Date install, int days, float price) :
        SareWare(name, company, install, days) {
        this->price = price;
    };

    void setPrice(float price) { this->price = price; };
    float getPrice()const { return price; };

    void showInfo()const override {
        SareWare::showInfo();
        cout << "Price: " << price << endl;
    };

    void load(ifstream& file) override {
        SareWare::load(file);
        file >> price;
    }
};