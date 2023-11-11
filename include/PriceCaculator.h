#pragma once

namespace PriceCal
{
  // ����classǿö��
  enum class DiscountType { CASS_NORMAL, CAHS_PERCENTOFF, CASH_BACK};

  class PriceCalculator final
  {
  public:
    double AcceptCash(const DiscountType type, const double money)const noexcept;
  };
} // namespace PriceCal
