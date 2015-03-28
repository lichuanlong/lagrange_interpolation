#include "Lagrange.hpp"
#include <iostream>

int main(){

    std::vector<float> x;
    std::vector<float> fx;

    x.push_back(1);
    x.push_back(2);
    x.push_back(3);
    x.push_back(4);
    x.push_back(5);

    fx.push_back(1);
    fx.push_back(1.5);
    fx.push_back(2);
    fx.push_back(2.5);
    fx.push_back(3);

    Lagrange lagrange(x, fx);

    std::cout << lagrange.interpolate(6) << "\n";
    std::cout << lagrange.interpolate(3) << "\n";


    return 0;
}
