#include "OrderBookEntry.h"

/// @brief class manages the (Bids/Buy and Ask/Sell) and allows for quick lookups of any existing order.
class OrderBook
{
  /// class members
  // bid side - buys

  // ask side - sells
  
  // order id lookup
  std::unordered_map<int64_t, OrderBookEntry*>;
};
