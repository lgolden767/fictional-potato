#include "Vec2.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

void Vector::upx(double inc) {
    x = inc;
}
void Vector::upy(double inc) {
    y = inc;
}

double Vector::get(int pos) {
    if (pos == 0) {
        return x;
    }
    else if (pos == 1) {
        return y;
    }
    else {
        return 0.0;
        std::cout << "Invalid index in a Vector" << '\n';
    }
}

std::vector<double> Vector::add(
    Vector A, Vector B
) {
    std::vector<double> result{A.x + B.x, A.y + B.y};
    return result;
}

double Vector::dot(
    Vector A, Vector B
) {
    double result = (A.x * B.x) + (A.y + B.y);
    return result;
}

std::vector<double> Vector::scalar_mult(
    Vector A, double c
) {
    std::vector<double> result{c * A.x, c * A.y};
    return result;
}

double Vector::mag(
    Vector A
) {
    double result = std::sqrt(A.x * A.x + A.y * A.y);
    return result;
}

