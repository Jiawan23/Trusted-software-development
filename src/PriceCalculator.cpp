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
  default:
    break;
  }
  return cash;
}


