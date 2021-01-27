#include <iostream>
#include "orderbook.h"

using namespace std;

int main()
{
    OrderBook ob;
    Order or1;
    or1._price = 10.0;
    or1._side = Side::SELL;
    or1._volume = 120000;

    ob.AddOrder(&or1);
//    cout << a << "   "<< b<< endl;
    return 0;
}
