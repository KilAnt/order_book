#ifndef SOURCE_DATA_H
#define SOURCE_DATA_H
#include <vector>
#include <deque>
#include <map>
#include <algorithm>
using namespace std;

enum Side
{
    BUY = 0,
    SELL
};

struct Order{
public:
    double _price;
    double _volume;
    double _filledVolume {0};
    Side _side;
//    Order(double price, double volume, double filledVolume, Side si)
//    : _price(price), _volume(volume), _filledVolume(filledVolume), _side(si)
//    {
//    }
};


struct Book{
    deque<double> _price;
    deque<double> _volume;
    deque<double> _filledVolume;
    deque<Side> _side;
};

struct level{
    int count;
    double _price;
    double _volume;
    double _filledVolume;
    Side _side;
};


class IOrderHandler {
public:
    virtual void AddOrder(Order* order) = 0;
    virtual void RemoveOrder(Order* order) = 0;
};

#endif // SOURCE_DATA_H
