#pragma once
#include <string>
#include <ctime>


 enum Colour {
        RED = 0,
        BLUE,
        GREEN,
        NONE
    };

class Geometric {
    double coordinate_x;
    double coordinate_y;
   
    Colour cl;
public:
   
    void setColour() {
        std::srand(std::time(nullptr));
        switch (rand() % 4) {
        case 0:
            std::cout << "YAHHO! 0" << std::endl;
            cl = Colour::NONE;
            break;
        case 1:
            std::cout << "YAHHO! 1" << std::endl;
            cl = Colour::RED;
            break;
        case 2:
            std::cout << "YAHHO! 2" << std::endl;
            cl = Colour::GREEN;
            break;
        case 3:
            std::cout << "YAHHO! 3" << std::endl;
            cl = Colour::BLUE;
            break;
        default: 
            std::cout << "Неверный ввод! setColour()" << std::endl;
        }
        
    }

    Colour getColour() {
        return cl;
    }
};