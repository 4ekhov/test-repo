#pragma once
#include <vector>
#include <functional>
#include "../CandleLib/candle.h"

// Тесты для body_contains
bool test_body_contains_inside();
bool test_body_contains_boundary();
bool test_body_contains_outside();

// Тесты для contains
bool test_contains_inside();
bool test_contains_boundary();
bool test_contains_outside();