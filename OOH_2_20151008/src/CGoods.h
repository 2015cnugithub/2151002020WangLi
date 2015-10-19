#ifndef CGOODS
#define CGOODS

class CGoods{
private:
	long no;
	char *p_name;
	double price;
	static int count;
	void updateCount(int);
public:
	CGoods(long, char*, double);

	CGoods(CGoods&);

	~CGoods();

	void showMsg();

	static int getCount();

	double getPrice();

	char* cpyName();

	long getNo();

	friend char* getName(CGoods&);

	virtual void usedFor();
};

#endif
