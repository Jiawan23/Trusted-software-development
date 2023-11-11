#include <gtest/gtest.h>

#include "PriceCaculator.h"

using namespace PriceCal;

TEST(hello, should_return_100_when_give_cash_normal_and_price_100)
{
    // given
    PriceCalculator priceCaculator;

    // when
    double cash = priceCaculator.AcceptCash(DiscountType::CASS_NORMAL,100.0);

    // then
    EXPECT_DOUBLE_EQ(100, cash);
}