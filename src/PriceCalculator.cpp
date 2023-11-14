#include "PriceCalculator.h"

double PriceCal::PriceCalculator::AcceptCash(const DiscountType type, const double money) const noexcept
{
  double cash = 0.0;
  switch (type)
  {
  case DiscountType::CASS_NORMAL:
    cash = money;
    break;
  case DiscountType::CASS_PERCENTOFF:
    cash = money * 0.9;
    break;
  case DiscountType::CASS_BACK:
    cash = money - 20 * (static_cast<int>(money) / 100 );
    break;
  default:
    break;
  }
  return cash;
}


