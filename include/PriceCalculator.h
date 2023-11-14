#pragma once

namespace PriceCal
{
  // 采用class强枚举,不打折，打九、八、七折，满100减20
  enum class DiscountType { CASS_NORMAL, CASS_PERCENTOFF_90,CASS_PERCENTOFF_80,CASS_PERCENTOFF_70, CASS_BACK};

  class PriceCalculator final
  {
  public:
    double AcceptCash(const DiscountType type, const double money)const noexcept;
  };
} // namespace PriceCal
