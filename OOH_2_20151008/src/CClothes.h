#include "CGoods.h"

class CClothes: public CGoods{
private:
	char* p_brand;
public:
	CClothes(long, char*, double, char*);
	CClothes(CClothes& clothes);
	void usedFor();
	char* cpyPBrand();
	~CClothes();
};
