#pragma once
#include <iostream>
#include "Vec2.h"
#include <vector>

class Particle {
    Vector r{0.0, 0.0};
    Vector v{0.0, 0.0};
    double m;
    Vector F{0.0, 0.0};
    double time = 0;
    double g = 9.81; //m s^-2

    public:
        Particle(double rxi, double ryi, double vxi, double vyi, double mi) {
            r.upx(rxi);
            r.upy(ryi);
            v.upx(vxi);
            v.upy(vyi);
            m = mi;
        }

        void update(double dt);
        std::vector<double> val();
};
