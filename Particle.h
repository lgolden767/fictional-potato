#pragma once
#include <iostream>
#include <vector>

class Particle {
    double r_x;
    double r_y;
    double v_x;
    double v_y;
    double m;
    double F_x;
    double F_y;
    double time;
    double g = 9.81; //m s^-2

    public:
        Particle(double rxi, double ryi, double vxi, double vyi, double mi) {
            r_x = rxi;
            r_y = ryi;
            v_x = vxi;
            v_y = vyi;
            m = mi;
            F_x = 0;
            F_y = 0;
            time = 0;
        }

        void update(double dt);
        std::vector<double> val();
};
