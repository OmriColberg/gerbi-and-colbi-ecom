#ifndef __SELLER_H
#define __SELLER_H



class Seller
{
private:
	Account *member;
	Feedback *list_of_feeds = nullptr;
	Product *the_store = nullptr;

Seller(Account m_member)
{
	*member = m_member;
}
Seller(const Seller &s)
{
   member = s.member;
}
};

#endif //__SELLER_H