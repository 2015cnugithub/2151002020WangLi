#include "CFood.h"
#include <iostream>
#include<string.h>

using namespace std;

CFood::CFood(long no, char* p_name, double price, char* p_brand) : CGoods(no, p_name, price) {
	this->p_brand = new char[100];
	strcpy(this->p_brand, p_brand);
}

CFood::CFood(CFood& food) : CGoods(food) {
	this->p_brand = food.cpyPBrand();
}

void CFood::usedFor() {
	cout << "Implemented by CFood." << endl;
}

char* CFood::cpyPBrand() {
	char* p = new char[100];
	strcpy(p, this->p_brand);
	return p;
}

CFood::~CFood() {
	delete this->p_brand;
	cout << "CFood is destroied." << endl;
}
