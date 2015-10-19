#include "CClothes.h"
#include <iostream>
#include<string.h>

using namespace std;

CClothes::CClothes(long no, char* p_name, double price, char* p_brand) : CGoods(no, p_name, price) {
	this->p_brand = new char[100];
	strcpy(this->p_brand, p_brand);
}

CClothes::CClothes(CClothes& clothes) : CGoods(clothes) {
	this->p_brand = clothes.cpyPBrand();
}

void CClothes::usedFor() {
	cout << "Implemented by CClothes." << endl;
}

char* CClothes::cpyPBrand() {
	char* p = new char[100];
	strcpy(p, this->p_brand);
	return p;
}

CClothes::~CClothes() {
	delete this->p_brand;
	cout << "CClothes is destroied." << endl;
}
