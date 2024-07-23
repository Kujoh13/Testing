#include "Equation.h"

std::string result(int a, int b, int c) {
    if (a > 100000 || a < -100000 || a == 0) {
        return "Invalid";
    }
    if (b > 100000 || b < -100000) {
        return "Invalid";
    }
    if (c > 100000 || c < -100000) {
        return "Invalid";
    }
    int delta = b * b - a * c * 4;
    if (delta < 0) {
        return "Vo Nghiem";
    }
    if (delta == 0) {
        return "Nghiem kep";
    }
    return "Phan biet";
}

