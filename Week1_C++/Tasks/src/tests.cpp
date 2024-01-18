/* PROPERTY OF INSITESOLUTIONS (C) * ALL RIGHTS RESERVED
 *
 * THIS TEST ENVIRONMENT WILL IMPROVE OVERTIME *
 */

#include "../../Solution/func.c"
#include <gtest/gtest.h>

double Add(double a, double b);
namespace UT {
    // GTest for the entire program
    TEST(CalculatorTest, Addition) {
        double expectedOutput = 28.19628 + 17.2716523;
        double actualOutput = Add(28.19628, 17.2716523);
        EXPECT_EQ(actualOutput, expectedOutput) << "Expected: " << expectedOutput << "\nActual: " << actualOutput;
    }

    TEST(CalculatorTest, Subtract) {
        double expectedOutput = 817 + 1982.23;
        double actualOutput = Subtract(817, 1982.23);
        EXPECT_EQ(actualOutput, expectedOutput) << "Expected: " << expectedOutput << "\nActual: " << actualOutput;
    }

    TEST(CalculatorTest, Division) {
        double expectedOutput = 17.f / 4.f;
        double actualOutput = Divide(17.f, 4.f);
        EXPECT_EQ(actualOutput, expectedOutput) << "Expected: " << expectedOutput << "\nActual: " << actualOutput;
    }

    TEST(CalculatorTest, Multiply) {
        double expectedOutput = 17.3f * 4.2f;
        double actualOutput = Multiply(17.3f, 4.2f);
        EXPECT_EQ(actualOutput, expectedOutput) << "Expected: " << expectedOutput << "\nActual: " << actualOutput;
    }
}
