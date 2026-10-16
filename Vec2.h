#include <vector>

class Vector {
    double a;
    double b;
    std::vector<double> vec{a, b};

    public:
        Vector(double A, double B) {
            a = A;
            b = B;
        }

        std::vector<double> add(
            Vector A, Vector C
        );
        double dot(
            Vector A, Vector C
        );
        std::vector<double> scalar_mult(
            Vector A, double c
        );
        double mag(
            Vector A
        );
};