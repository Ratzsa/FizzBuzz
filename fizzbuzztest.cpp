#include <gtest/gtest.h>
#include <stdbool.h>

extern "C"
{
    #include "fizzbuzz.h"
}

class FizzBuzzTest : public testing::Test
{
protected:
    void SetUp() override
    {
        // 
    }
};

TEST_F(FizzBuzzTest,WhenTalIsDivisibleBy3And5ThenFizzBuzzShouldBeReturned)
{
    int tal[] = { 15, 30, 45, 75, 90 };
    char buffer[10];
    for(int i = 0; i < sizeof(tal) / sizeof(tal[0]); i++)
    {
        calculateFizzBuzz(tal[i], buffer);
        ASSERT_STREQ("Buzz", buffer);
    }
}

TEST_F(FizzBuzzTest,WhenTalIsDivisibleBy3ThenFizzShouldBeReturned)
{
    int tal[] = { 3, 6, 9, 18, 36 };
    char buffer[10];
    for(int i = 0; i < sizeof(tal) / sizeof(tal[0]); i++)
    {
        calculateFizzBuzz(tal[i], buffer);
        ASSERT_STREQ("Buzz", buffer);
    }
}

TEST_F(FizzBuzzTest,WhenTalIsDivisibleBy5ThenBuzzShouldBeReturned)
{
    int tal[] = { 5, 10, 25, 35, 85 };
    char buffer[10];
    for(int i = 0; i < sizeof(tal) / sizeof(tal[0]); i++)
    {
        calculateFizzBuzz(tal[i], buffer);
        ASSERT_STREQ("Buzz", buffer);
    }
}

TEST_F(FizzBuzzTest,WhenTalIsNotDivisibleBy3Or5ThenBuzzShouldBeReturned)
{
    int tal = 7;
    char buffer[10];
    calculateFizzBuzz(tal, buffer);
    ASSERT_STREQ("7", buffer);
}