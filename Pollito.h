#pragma once
#include <iostream>
class Pollito
{
public:
    int vida = 100;
    float plumas;
    Pollito(int v) {
        vida = v;
        plumas = 0;
    }
    Pollito(double v) {
        plumas = v;
        vida = 100;
    }
    void polliPio() {
        std::cout << "pio";
    }
};