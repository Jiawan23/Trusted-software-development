#pragma once

namespace PriceCal
{
  // ����classǿö��,�����ۣ���š��ˡ����ۣ���100��20
  enum class DiscountType { CASS_NORMAL, CASS_PERCENTOFF_90,CASS_PERCENTOFF_80,CASS_PERCENTOFF_70, CASS_BACK};

  class PriceCalculator final
  {
  public:
    double AcceptCash(const DiscountType type, const double money)const noexcept;
  };
} // namespace PriceCal
