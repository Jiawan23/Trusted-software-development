#pragma once

namespace PriceCal
{
  // 采用class强枚举
  enum class DiscountType { CASS_NORMAL, CASS_PERCENTOFF, CASS_BACK};

  class PriceCalculator final
  {
  public:
    double AcceptCash(const DiscountType type, const double money)const noexcept;
  };
} // namespace PriceCal
