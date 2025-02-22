#include "tests.h"

bool test_body_contains_inside()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return candle.body_contains(110.0);
}

bool test_body_contains_boundary()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return candle.body_contains(100.0) && candle.body_contains(120.0);
}

bool test_body_contains_outside()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return !candle.body_contains(95.0) && !candle.body_contains(130.0);
}

bool test_contains_inside()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return candle.contains(110.0) && candle.contains(95.0) && candle.contains(140.0);
}

bool test_contains_boundary()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return candle.contains(90.0) && candle.contains(150.0);
}

bool test_contains_outside()
{
    Candle candle(100.0, 150.0, 90.0, 120.0);
    return !candle.contains(89.9) && !candle.contains(150.1);
}