#pragma once
#include "../CandleLib/candle.h"

const double epsilon = 0.0000001;

// Тесты для body_contains
bool test_body_contains_inside();
bool test_body_contains_boundary();
bool test_body_contains_outside();

// Тесты для contains
bool test_contains_inside();
bool test_contains_boundary();
bool test_contains_outside();

// Тесты для full_size
bool test_full_size_normal();
bool test_full_size_zero();
bool test_full_size_small();

// Тесты для body_size
bool test_body_size_normal();
bool test_body_size_neutral();
bool test_body_size_small();

// Тесты для is_red
bool test_is_red_true();
bool test_is_red_false();
bool test_is_red_neutral();