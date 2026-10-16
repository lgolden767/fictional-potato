#pragma once
#include <vector>

class Vector {
    double x;
    double y;

    public:
        Vector(double A, double B) {
            x = A;
            y = B;
        }

        void upx(double inc);
        void upy(double inc);

        double get(int pos);
        double getdoub(std::string param);

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