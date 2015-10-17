#include "CClothes.h"
#include <iostream>

using namespace std;

CClothes::CClothes(long no, char* p_name, double price, char* p_brand):CGoods(no, p_name, price){
	CClothes::p_brand = p_brand;
}

CClothes::CClothes(CClothes& clothes):CGoods(clothes){
	CClothes::p_brand = clothes.getPBrand();
}

void CClothes::usedFor(){
	cout<<"Implemented by CClothes."<<endl;
}

char* CClothes::getPBrand(){
	return CClothes::p_brand;
}

CClothes::~CClothes(){
	cout<<"CClothes is destroied."<<endl;
}