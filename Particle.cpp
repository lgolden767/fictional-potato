#include "Particle.h"
#include "Vec2.h"
#include <cmath>
#include <vector>

void Particle::update (double dt) {
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

double Particle::get(std::string val) {
    double result = 0;

    if (val == "rx") {
        result = r.get(0);
    }
    else if (val == "ry") {
        result = r.get(1);
    }
    else if (val == "vx") {
        result = v.get(0);
    }
    else if (val == "vy") {
        result = v.get(1);
    }
    else if (val == "Fx") {
        result = v.get(0);
    }
    else if (val == "Fy") {
        result = v.get(1);
    }
    else if (val == "m") {
        result = m;
    }
    else {
        result = 0;
        std::cout << "Invalid parameter request." << '\n';
    }

    return result;
}

void Particle::force(
    double mag, double angle
) {
    double F_x = F.get(0);
    double F_y = F.get(1);

    F_x += mag * sin(angle);
    F_y += mag * cos(angle);

    F.upx(F.get(0) + F_x);
    F.upy(F.get(1) + F_y);
}