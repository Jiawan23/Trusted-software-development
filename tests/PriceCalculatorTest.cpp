#include <gtest/gtest.h>

#include "PriceCalculator.h"

using namespace PriceCal;

TEST(hello, should_return_100_when_give_cash_normal_and_price_100)
{
    // given
    PriceCalculator priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(DiscountType::CASS_NORMAL,100.0);

    // then
    EXPECT_DOUBLE_EQ(100, cash);
}

TEST(hello, should_return_90_when_give_cash_percentoff_and_price_100)
{
    // given
    PriceCalculator priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(DiscountType::CASS_PERCENTOFF_90,100.0);

    // then
    EXPECT_DOUBLE_EQ(90, cash);
}

TEST(hello, should_return_80_when_give_cash_back_and_price_100)
{
    // given
    PriceCalculator priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(DiscountType::CASS_BACK,100.0);

    // then
    EXPECT_DOUBLE_EQ(80, cash);
}

TEST(hello, should_return_50_when_give_cash_back_and_price_50)
{
    // given
    PriceCalculator priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(DiscountType::CASS_BACK,50.0);

    // then
    EXPECT_DOUBLE_EQ(50, cash);
}

TEST(hello, should_return_210_when_give_cash_back_and_price_250)
{
    // given
    PriceCalculator priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(DiscountType::CASS_BACK,250.0);

    // then
    EXPECT_DOUBLE_EQ(210, cash);
}