#include "Math.h"
#include <cstdarg>
#include <cstring>

int Math::Add(int a, int b) {
    return a + b;
}

int Math::Add(int a, int b, int c) {
    return a + b + c;
}

int Math::Add(double a, double b) {
    return (int)(a + b);
}

int Math::Add(double a, double b, double c) {
    return (int)(a + b + c);
}

int Math::Mul(int a, int b) {
    return a * b;
}

int Math::Mul(int a, int b, int c) {
    return a * b * c;
}

int Math::Mul(double a, double b) {
    return (int)(a * b);
}

int Math::Mul(double a, double b, double c) {
    return (int)(a * b * c);
}

int Math::Add(int count, ...) {

    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}
char* Math::Add(const char* str1, const char* str2) {
    if (str1 == nullptr || str2 == nullptr)
        return nullptr;
    int l1 = strlen(str1);
    int l2 = strlen(str2);

    int maxL = (l1 > l2) ? l1 + 2 : l2 + 2;

    char* result = new char[maxL];

    int carry = 0;
    int i = l1 - 1;
    int j = l2 - 1;
    int k = maxL - 2;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += str1[i--] - '0';
        if (j >= 0) sum += str2[j--] - '0';

        result[k--] = '0' + (sum % 10);
        carry = sum / 10;
    }

    result[maxL - 1] = '\0';

    if (k > 0) {
        int shiftLen = maxL - k - 1;
        for (int i = 0; i < shiftLen; ++i) {
            result[i] = result[i + k + 1];
        }
        result[shiftLen] = '\0';
    }

    return result;
}

