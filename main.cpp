#include "Particle.h"
#include <vector>
#include <iostream>

double g = 9.81; //m s^-2

int main() {
    Particle obj1(0.0, 10.0, 2.0, 0.0, 10.0);
     
    for (int i = 0; i < 100; ++i) {
        obj1.force(obj1.get("m") * g, -M_PI);
        obj1.update(0.01);
    }
    
    std::vector<double> val_one_sec = obj1.val();

    std::cout << "X:  " << val_one_sec[0] << '\n';
    std::cout << "Y:  " << val_one_sec[1] << '\n';
    std::cout << "Vx: " << val_one_sec[2] << '\n';
    std::cout << "Vy: " << val_one_sec[3] << '\n';
}