#include "CandleLib/candle.h"
#include "TestsLib/tests.h"

#include <vector>
#include <functional>
#include <iostream>

//массив всех тестов, который мы заполняем в функции initTests
static std::vector<std::function<bool()>> tests;

void initTests()
{
    // Тесты body_contains
    tests.push_back(test_body_contains_inside);
    tests.push_back(test_body_contains_boundary);
    tests.push_back(test_body_contains_outside);

    // Тесты contains
    tests.push_back(test_contains_inside);
    tests.push_back(test_contains_boundary);
    tests.push_back(test_contains_outside);

    // Тесты full_size
    tests.push_back(test_full_size_normal);
    tests.push_back(test_full_size_zero);
    tests.push_back(test_full_size_small);

    // Тесты body_size
    tests.push_back(test_body_size_normal);
    tests.push_back(test_body_size_neutral);
    tests.push_back(test_body_size_small);

    // Тесты is_red
    tests.push_back(test_is_red_true);
    tests.push_back(test_is_red_false);
    tests.push_back(test_is_red_neutral);
}

int launchTests()
{
  int total = 0;
  int passed = 0;

  for (const auto& test : tests)
  {
    std::cout << "test #" << (total + 1);
    if (test())
    {
      passed += 1;
      std::cout << " passed\n";
    }
    else
    {
      std::cout << " failed\n";
    }
    total += 1;
  }

  std::cout << "\ntests " << passed << "/" << total << " passed!" << std::endl;

  //0 = success
  return total - passed;
}

int main()
{
  initTests();
  return launchTests();
}
