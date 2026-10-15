#include "Particle.h"
#include <cmath>
#include <vector>

void Particle::update (double dt) {
    if (m > 0) {
        F_y += -m * g;
    }
    
    double a_x = F_x / m;
    double a_y = F_y / m;

    v_x += a_x * dt;
    v_y += a_y * dt;

    r_x += v_x * dt;
    r_y += v_y * dt;

    F_y = 0;
    F_x = 0;
    time += dt;
}

std::vector<double> Particle::val () {
    std::vector<double> values {r_x, r_y, v_x, v_y};
    return values;
}