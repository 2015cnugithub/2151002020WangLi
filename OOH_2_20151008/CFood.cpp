#include "CFood.h"
#include <iostream>

using namespace std;

CFood::CFood(long no, char* p_name, double price, char* p_brand):CGoods(no, p_name, price){
	CFood::p_brand = p_brand;
}

CFood::CFood(CFood& food):CGoods(food){
	CFood::p_brand = food.getPBrand();
}

void CFood::usedFor(){
	cout<<"Implemented by CFood."<<endl;
}

char* CFood::getPBrand(){
	return CFood::p_brand;
}

CFood::~CFood(){
	cout<<"CFood is destroied."<<endl;
}