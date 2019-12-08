#include "types.h"


void System::display()
{
    int choise;
    cout << "Interactive Menu, choose your Option:" << endl;    
    cout << "1)Add buyer \n" <<
            "2)Add seller \n" <<
            "3)Add product to seller \n" << 
            "4)Add feedback to seller \n"  <<
            "5)Add product to cart \n" <<
            "6)Place order \n" <<
            "7)Pay for Order \n" <<
            "8)Display buyers \n" <<
            "9)Display sellers \n" <<
            "10)Search for seller name \n" <<
            "11)Exit" << endl;
    cin >> choise;
    if (choise < 0 || 11 < choise)
        cout << "invalid choise, try again";
}