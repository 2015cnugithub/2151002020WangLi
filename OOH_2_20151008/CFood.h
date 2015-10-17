#include "CGoods.h"

class CFood: public CGoods{
private:
	char* p_brand;
public:
	CFood(long, char*, double, char*);
	CFood(CFood& food);
	void usedFor();
	char* getPBrand();
	~CFood();
};