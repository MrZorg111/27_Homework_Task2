#pragma once
#include <string>
#include <ctime>


 enum Colour {
        NONE = 0,
        RED,
        GREEN,
        BLUE
    };

class Geometric {
    double coordinate_x = 0;
    double coordinate_y = 0;
    double step = 1;
    struct DescrRect {
        double coordinate_x1 = 0, coordinate_x2 = 0, coordinate_x3 = 0, coordinate_x4 = 0;
        double coordinate_y1 = 0, coordinate_y2 = 0, coordinate_y3 = 0, coordinate_y4 = 0;
        
    };
    Colour cl = Colour::NONE;
public:
    DescrRect des;
    void setColour() {
        std::srand(std::time(nullptr));
        switch (rand() % 4) {
        case 0:
            cl = Colour::NONE;
            break;
        case 1:
            cl = Colour::RED;
            break;
        case 2:
            cl = Colour::GREEN;
            break;
        case 3:
            cl = Colour::BLUE;
            break;
        default: 
            std::cout << "Incorrect input! setColour()" << std::endl;
        }
        
    }
    void setCoordinate(double coordinate_x, double coordinate_y) {
        this->coordinate_x = coordinate_x;
        this->coordinate_y = coordinate_y;
    }
   
    //____________________________________________________________//

    double getCoordinateX() {
        return coordinate_x;
    }
    double getCoordinateY() {
        return coordinate_y;
    }
    double getStep() {
        return step;
    }
    void getColour() {
        switch (cl) {
            case Colour::NONE:
                std::cout << "The color is missing!" << std::endl;
                break;
            case Colour::RED:
                std::cout << "The color is Red!" << std::endl;
                break;
            case Colour::GREEN:
                std::cout << "The color is Green!" << std::endl;
                break;
            case Colour::BLUE:
                std::cout << "The color is Blue!" << std::endl;
                break;
            defaul:
                std::cout << "Color data output error!" << std::endl;

        }
    }
    void getCoordinateDescRect() {
        std::cout << "Coordinates of the corners of the rectangle describing the shape: " << std::endl;
        std::cout << "Coordinates of the upper left corner: " << des.coordinate_x1 << " " << des.coordinate_y1 << std::endl;
        std::cout << "Coordinates of the upper right corner: " << des.coordinate_x2 << " " << des.coordinate_y2 << std::endl;
        std::cout << "Coordinates of the lower left corner: " << des.coordinate_x3 << " " << des.coordinate_y3 << std::endl;
        std::cout << "Coordinates of the lower right corner: " << des.coordinate_x4 << " " << des.coordinate_y4 << std::endl;
    }
};