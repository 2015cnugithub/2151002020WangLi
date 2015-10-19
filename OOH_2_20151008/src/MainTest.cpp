#include <iostream>
#include "CGoods.h"
#include "CClothes.h"
#include "CFood.h"

using namespace std;

char* getName(CGoods& goods) {
	return goods.cpyName();
}

bool operator <(CGoods& goods1, CGoods& goods2) {
	bool rslt = false;
	if (goods1.getPrice() < goods2.getPrice()) {
		rslt = true;
	}
	return rslt;
}

bool operator >=(CGoods& goods1, CGoods& goods2) {
	bool rslt = false;
	if (goods1.getPrice() >= goods2.getPrice()) {
		rslt = true;
	}
	return rslt;
}

int main() {

	cout << "测试CGoods构造函数..." << endl;
	CGoods goods1(1, "goods1", 10);
	goods1.showMsg();
	cout << "测试CGoods构造函数...完成！" << endl;

	cout << endl;

	cout << "测试CGoods拷贝构造函数..." << endl;
	CGoods goods2(goods1);
	goods2.showMsg();
	cout << "测试CGoods拷贝构造函数...完成！" << endl;

	cout << endl;

	cout << "测试CGoods友元函数..." << endl;
	CGoods goods3(3, "goods3", 20);
	cout << "The name of goods3: " << getName(goods3) << endl;
	cout << "测试CGoods友元函数...完成！" << endl;

	cout << endl;

	cout << "测试CGoods count成员..." << endl;
	cout << "Goods Count: " << CGoods::getCount() << endl;
	cout << "测试CGoods count成员...完成！" << endl;

	cout << endl;

	cout << "测试CGoods重写<操作符..." << endl;
	CGoods goods4(4, "goods4", 4);
	if (goods4 < goods2) {
		cout << "The goods2 is little than goods4." << endl;
	}
	cout << "测试CGoods重写<操作符...完成！" << endl;

	cout << endl;

	cout << "测试CGoods重写>=操作符..." << endl;
	if (goods2 >= goods1) {
		cout << "The goods2 is more than or equals goods1." << endl;
	}
	if (goods3 >= goods1) {
		cout << "The goods3 is more than or equals goods1." << endl;
	}
	cout << "测试CGoods重写>=操作符...完成！" << endl;

	cout << endl;

	cout << "测试CClothes构造函数..." << endl;
	CClothes clothes1(5, "clothes1", 200, "wear");
	clothes1.showMsg();
	cout << "测试CClothes构造函数...完成！" << endl;

	cout << endl;

	cout << "测试CClothes拷贝构造函数..." << endl;
	CClothes clothes2(clothes1);
	clothes2.showMsg();
	cout << "测试CClothes拷贝构造函数...完成！" << endl;

	cout << endl;

	cout << "测试CFood构造函数..." << endl;
	CFood food1(6, "food1", 2000, "eat");
	food1.showMsg();
	cout << "测试CFood构造函数...完成！" << endl;

	cout << endl;

	cout << "测试CFood拷贝构造函数..." << endl;
	CFood food2(food1);
	food2.showMsg();
	cout << "测试CFood拷贝构造函数...完成！" << endl;

	cout << endl;

	cout << "测试多态..." << endl;
	CGoods* pGoods;
	int ch = 1;
	cout << "Please select: 1.CClothes 2.CFood" << endl;
	cin >> ch;
	if (ch == 1) {
		pGoods = &clothes1;
	} else {
		pGoods = &food1;
	}
	pGoods->showMsg();
	pGoods->usedFor();
	cout << "测试多态...完成！" << endl;

	cout << endl;

	return 0;
}
