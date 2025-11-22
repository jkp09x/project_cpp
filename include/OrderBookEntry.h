#include "LimitOrder.h"

class OrderBookEntry
{
public:
  LimitOrder order;

  OrderBookEntry *prevOrder = nullptr;
  OrderBookEntry *nextOrder = nullptr;
  
  // Constructor
  OrderBookEntry(const LimitOrder & ord) :
    order(ord),
    prevOrder(nullptr),
    nextOrder(nullptr)
  {}

  // Default Constructor
  OrderBookEntry() :
    order(),
    prevOrder(nullptr),
    nextOrder(nullptr)
  {}
};
