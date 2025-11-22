#include <cstdint>

/// 
/// @brief Enum class SIDE to represent if the order is a Buy or a Sell.
/// 
enum class SIDE : int8_t
{
  BUY = 0,
  SELL
};

class LimitOrder
{
public:
  LimitOrder(int64_t id,
             int64_t ts,
             SIDE s,
             double cost,
             int64_t quantity) :
    _orderId(id),
    _timestamp(ts),
    _side(s),
    _price(cost),
    _qty(quantity),
    _remQty(quantity)
  {}

  // Default Constructor
  LimitOrder() :
    _orderId(0),
    _timestamp(0),
    _side(SIDE::BUY),
    _price(0.00),
    _qty(0),
    _remQty(0)
  {}
private:
  int64_t _orderId;
  int64_t _timestamp;
  SIDE _side;
  double _price;
  int64_t _qty;
  int64_t _remQty;
};
