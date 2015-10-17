#include "CGoods.h"
#include <iostream>

using namespace std;

int CGoods::count = 0;

CGoods::CGoods(long no, char* p_name, double price){
	CGoods::no = no;
	CGoods::p_name = p_name;
	CGoods::price = price;
	CGoods::updateCount(1);
}

CGoods::CGoods(CGoods& goods){
	CGoods::no = goods.no;
	CGoods::p_name = goods.p_name;
	CGoods::price = goods.price;
	CGoods::updateCount(1);
}

CGoods::~CGoods(){
	CGoods::updateCount(-1);
	cout<<"Goods("<<CGoods::no<<","<<CGoods::p_name<<","<<CGoods::price<<") is destroied."<<endl;
}

void CGoods::showMsg(){
	cout<<"Goods("<<CGoods::no<<","<<CGoods::p_name<<","<<CGoods::price<<")"<<endl;
}

void CGoods::updateCount(int n){
	CGoods::count = CGoods.count + n;
}

int CGoods::getCount(){
	return CGoods.count;
}

double CGoods::getPrice(){
	return CGoods::price;
}

void CGoods::usedFor(){
	cout<<"Implemented by CGoods."<<endl;
}