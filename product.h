#ifndef __PRODUCT_H
#define __PRODUCT_H


enum eCategories { ELECTRONICS, FASHION, KIDS, OFFICE };

class Product
{
private:
	eCategories category;
	char *name;
	int price;
	int barcode;

	Product(eCategories m_cat, char* m_name, int m_price)
	{
		static unsigned int currBC = 1;
		category = m_cat;
		name = new char[strlen(m_name) + 1];
		strcpy(name, m_name);
		price = m_price;
		barcode = currBC++;

	}
};


#endif // __PRODUCT_H