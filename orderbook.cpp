#include "orderbook.h"



OrderBook::OrderBook()
{

}

OrderBook::~OrderBook()
{

}

void OrderBook::add_lvl()
{


}

void OrderBook::get_lvl_info(int lvl, int &volumeASK, float &priceASK, int &volumeBID, float &priceBID)
{

}

void OrderBook::get_lvl_info(Side s, int lvl, int &volume, float &price)
{

}

void OrderBook::AddOrder(Order *order)
{
    level lv;
    lv._side = order->_side;
    lv._price = order->_price;
    lv._volume = order->_volume;
    lv._filledVolume = order->_filledVolume;
    if(order->_side == Side::BUY){
        levelsBID.push_front(lv);
        sort(levelsBID.begin(), levelsBID.end());
        int cur_lv = 0;
        for(auto number :levelsBID){
            number.count = cur_lv;
            ++cur_lv;
            }
    }else {
        levelsASK.push_front(lv);
        sort(levelsASK.rbegin(), levelsASK.rend());
        int cur_lv = 0;
        for( auto number :levelsBID){
            number.count = cur_lv;
            ++cur_lv;
        }
    }
}

void OrderBook::RemoveOrder(Order *order)
{

}
