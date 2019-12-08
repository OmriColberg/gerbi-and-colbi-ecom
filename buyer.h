#ifndef __BUYER_H
#define __BUYER_H



class Buyer
{
private:
    Account *member;
	Cart *my_cart = nullptr;
public:
    Buyer();
    Buyer(Account m_member);

};

#endif // __BUYER_H