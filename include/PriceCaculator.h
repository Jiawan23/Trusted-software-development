#pragma once

namespace PriceCal
{
  // ����classǿö��
  enum class DiscountType { CASS_NORMAL, CASS_PERCENTOFF, CASS_BACK};

  class PriceCalculator final
  {
  public:
    double AcceptCash(const DiscountType type, const double money)const noexcept;
  };
} // namespace PriceCal
