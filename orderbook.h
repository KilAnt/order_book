#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "source_data.h"






class OrderBook : public IOrderHandler
{
private:
    vector<Order> v_orders;
    Book bk;
    int counter = 0;
    deque<level> levelsBID;
    deque<level> levelsASK;
    void add_lvl();
public:
    explicit OrderBook();
    virtual ~OrderBook();
    void get_lvl_info(int lvl, int &volumeASK, float &priceASK, int &volumeBID, float &priceBID);
    void get_lvl_info(Side s, int lvl, int &volume, float &price);
    virtual void AddOrder(Order* order);
    virtual void RemoveOrder(Order* order);
};

#endif // ORDERBOOK_H
