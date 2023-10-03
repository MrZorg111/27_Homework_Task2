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
            std::cout << "Неверный ввод! setColour()" << std::endl;
        }
        
    }
    void setCoordinate(double coordinate_x, double coordinate_y) {
        this->coordinate_x = coordinate_x;
        this->coordinate_y = coordinate_y;
    }
   
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
                std::cout << "Цвет отсутствует!" << std::endl;
                break;
            case Colour::RED:
                std::cout << "Цвет Красный!" << std::endl;
                break;
            case Colour::GREEN:
                std::cout << "Цвет Зеленый!" << std::endl;
                break;
            case Colour::BLUE:
                std::cout << "Цвет Синий!" << std::endl;
                break;
            defaul:
                std::cout << "Ошибка вывода данных цвета!" << std::endl;

        }
    }
    void getCoordinateDescRect() {
        std::cout << "Координаты углов описывающего фигуру прямоугольника: " << std::endl;
        std::cout << "Координаты верхнего левого угла: " << des.coordinate_x1 << " " << des.coordinate_y1 << std::endl;
        std::cout << "Кординаты верхнего правого угла: " << des.coordinate_x2 << " " << des.coordinate_y2 << std::endl;
        std::cout << "Координаты нижнего левого угла: " << des.coordinate_x3 << " " << des.coordinate_y3 << std::endl;
        std::cout << "Координаты нижнего левого угла: " << des.coordinate_x4 << " " << des.coordinate_y4 << std::endl;
    }
};