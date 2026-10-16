#include "Particle.h"
#include "Vec2.h"
#include <cmath>
#include <vector>

void Particle::update (double dt) {
    if (m > 0) {
        F.upy(-m * g);
    }
    
    double a_x = F.get(0) / m;
    double a_y = F.get(1) / m;

    v.upx(v.get(0) + a_x * dt);
    v.upy(v.get(1) + a_y * dt);

    r.upx(r.get(0) + v.get(0) * dt);
    r.upy(r.get(1) + v.get(1) * dt);

    F.upx(0);
    F.upy(0);
    time += dt;
}

std::vector<double> Particle::val () {
    std::vector<double> values {r.get(0), r.get(1), v.get(0), v.get(1)};
    return values;
}