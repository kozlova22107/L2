#ifndef QUEX_TEST_H
#define QUEX_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(quExTest, positiveDiscriminant) {
    float root1, root2;
    float a = 1, b = -3, c = 2;
    int roots = quEx(a, b, c, &root1, &root2);
    ASSERT_EQ(roots, 2);
    ASSERT_FLOAT_EQ(root1, 2.0);
    ASSERT_FLOAT_EQ(root2, 1.0);
}

TEST(quExTest, zeroDiscriminant) {
    float root1, root2;
    float a = 1, b = -2, c = 1;
    int roots = quEx(a, b, c, &root1, &root2);
    ASSERT_EQ(roots, 1);
    ASSERT_FLOAT_EQ(root1, 1.0);
    ASSERT_FLOAT_EQ(root2, 1.0);
}

TEST(quExTest, negativeDiscriminant) {
    float root1, root2;
    float a = 1, b = 1, c = 1;
    int roots = quEx(a, b, c, &root1, &root2);
    ASSERT_EQ(roots, 0);
}

TEST(quExTest, invalidCoefficients) {
    float root1, root2;
    float a = 0, b = 1, c = 1; // Нулевой коэффициент 'a'
    int roots = quEx(a, b, c, &root1, &root2);
    ASSERT_EQ(roots, -1); // Ожидаемый результат - код ошибки
}

#endif // QUEX_TEST_H
