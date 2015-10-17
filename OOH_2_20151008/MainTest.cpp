#include <iostream>
#include "CGoods.h"
#include "CClothes.h"
#include "CFood.h"

using namespace std;

char* getName(CGoods& goods){
	return goods.p_name;
}

bool operator < (CGoods& goods1, CGoods& goods2){
	bool rslt = false;
	double a = 100;
	double b = 200;
	if(goods1.getPrice()<goods2.getPrice()){
		rslt = true;
	}
	return rslt;
}

bool operator >= (CGoods& goods1, CGoods& goods2){
	bool rslt = false;
	if(goods1.getPrice()>=goods2.getPrice()){
		rslt = true;
	}
	return rslt;
}

int main(){

	cout<<"����CGoods���캯��..."<<endl;
	CGoods goods1(1, "goods1", 10);
	goods1.showMsg();
	cout<<"����CGoods���캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CGoods�������캯��..."<<endl;
	CGoods goods2(goods1);
	goods2.showMsg();
	cout<<"����CGoods�������캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CGoods��Ԫ����..."<<endl;
	CGoods goods3(3, "goods3", 20);
	cout<<"The name of goods3: "<<getName(goods3)<<endl;
	cout<<"����CGoods��Ԫ����...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CGoods count��Ա..."<<endl;
	cout<<"Goods Count: "<<CGoods::getCount()<<endl;
	cout<<"����CGoods count��Ա...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CGoods��д<������..."<<endl;
	CGoods goods4(4, "goods4", 4);
	if(goods4<goods2){
		cout<<"The goods2 is little than goods4."<<endl;
	}
	cout<<"����CGoods��д<������...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CGoods��д>=������..."<<endl;
	if(goods2>=goods1){
		cout<<"The goods2 is more than or equals goods1."<<endl;
	}
	if(goods3>=goods1){
		cout<<"The goods3 is more than or equals goods1."<<endl;
	}
	cout<<"����CGoods��д>=������...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CClothes���캯��..."<<endl;
	CClothes clothes1(5, "clothes1", 200, "wear");
	clothes1.showMsg();
	cout<<"����CClothes���캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CClothes�������캯��..."<<endl;
	CClothes clothes2(clothes1);
	clothes2.showMsg();
	cout<<"����CClothes�������캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CFood���캯��..."<<endl;
	CFood food1(6, "food1", 2000, "eat");
	food1.showMsg();
	cout<<"����CFood���캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"����CFood�������캯��..."<<endl;
	CFood food2(food1);
	food2.showMsg();
	cout<<"����CFood�������캯��...��ɣ�"<<endl;

	cout<<endl;

	cout<<"���Զ�̬..."<<endl;
	CGoods* pGoods;
	int ch = 1;
	cout<<"Please select: 1.CClothes 2.CFood"<<endl;
	cin>>ch;
	if(ch==1){
		pGoods = &clothes1;
	}else{
		pGoods = &food1;
	}
	pGoods->showMsg();
	pGoods->usedFor();
	cout<<"���Զ�̬...��ɣ�"<<endl;

	cout<<endl;

	return 0;
}