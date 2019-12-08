#ifndef __TRANSACTION_H
#define __TRANSACTION_H


class Transaction
{
private:
	Buyer *the_buyer;
	Seller *the_seller;
	Date *the_date;


	Transaction(Buyer m_the_buyer, Seller m_the_seller, Date m_the_date)
	{
		*the_buyer = m_the_buyer;
		*the_seller = m_the_seller;
		*the_date = m_the_date;
	}
/*	void setBuyer(Buyer buyer) { the_buyer = buyer; }
    void setSeller(Seller seller) { the_seller = seller; }
	void setDate(Date date) { the_date = date; } // dont  know if needeed */
};


#endif // __TRANSACTION_H