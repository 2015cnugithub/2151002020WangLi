#include "CGoods.h"
#include <iostream>
#include<string.h>

using namespace std;

int CGoods::count = 0;

CGoods::CGoods(long no, char* p_name, double price) {
	this->no = no;
	this->p_name = new char[100];
	strcpy(this->p_name, p_name);
	this->price = price;
	this->updateCount(1);
}

CGoods::CGoods(CGoods& goods) {
	this->no = goods.getNo();
	this->p_name = goods.cpyName();
	this->price = goods.getPrice();
	this->updateCount(1);
}

CGoods::~CGoods() {
	this->updateCount(-1);
	cout << "Goods(" << this->no << "," << this->p_name << "," << this->price<< ") is destroied." << endl;
	delete this->p_name;
}

void CGoods::showMsg() {
	cout << "Goods(" << this->no << "," << this->p_name << "," << this->price<< ")" << endl;
}

void CGoods::updateCount(int n) {
	CGoods::count = CGoods::count + n;
}

int CGoods::getCount() {
	return CGoods::count;
}

double CGoods::getPrice() {
	return this->price;
}

char* CGoods::cpyName(){
	char* pN = new char[100];
	strcpy(pN, this->p_name);
	return pN;
}

long CGoods::getNo(){
	return this->no;
}

void CGoods::usedFor() {
	cout << "Implemented by CGoods." << endl;
}
