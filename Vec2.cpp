#include "Vec2.h"
#include <vector>
#include <cmath>


std::vector<double> Vector::add(
    Vector A, Vector B
) {
    std::vector<double> result{A.a + B.a, A.b + B.b };
    return result;
}

double Vector::dot(
    Vector A, Vector B
) {
    double result = (A.a * B.a) + (A.b + B.b);
    return result;
}

std::vector<double> Vector::scalar_mult(
    Vector A, double c
) {
    std::vector<double> result{c * A.a, c * A.b};
    return result;
}

double Vector::mag(
    Vector A
) {
    double result = std::sqrt(A.a * A.a + A.b * A.b);
    return result;
}

