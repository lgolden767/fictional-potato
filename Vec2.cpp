#include "Vec2.h"
#include <vector>
#include <cmath>

void Vector::upx(double inc) {
    x = inc;
}
void Vector::upy(double inc) {
    y = inc;
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

