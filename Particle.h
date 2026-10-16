#pragma once
#include <iostream>
#include <string>
#include "Vec2.h"
#include <vector>
#include <cmath>

class Particle {
    Vector r{0.0, 0.0};
    Vector v{0.0, 0.0};
    Vector F{0.0, 0.0};
    double m;
    double time = 0;

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
        double get(std::string val);
        void force(double mag = 1, double angle = M_PI);
};
