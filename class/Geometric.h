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
    struct DescrRect {
        double coordinate_x1, coordinate_x2, coordinate_x3, coordinate_x4;
        double coordinate_y1, coordinate_y2, coordinate_y3, coordinate_y4;
        double step = 0.0001;
   };
    Colour cl;
public:
    DescrRect des;
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
    void setCoordinate(double coordinate_x, double coordinate_y) {
        this->coordinate_x = coordinate_x;
        this->coordinate_y = coordinate_y;
    }
    void setCoordinateDescrRect(double perssign) {
         des.coordinate_x1 = coordinate_x - (perssign + des.step);
         des.coordinate_y1 = coordinate_y + (perssign + des.step);
         des.coordinate_x2 = coordinate_x + (perssign + des.step);
         des.coordinate_y2 = coordinate_y + (perssign + des.step);
         des.coordinate_x3 = coordinate_x - (perssign + des.step);
         des.coordinate_y3 = coordinate_y - (perssign + des.step);
         des.coordinate_x4 = coordinate_x + (perssign + des.step);
         des.coordinate_y4 = coordinate_y - (perssign + des.step);
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
        std::cout << "Координаты верхнего левого угла: " << des.coordinate_x1 << " " << des.coordinate_y1 << std::endl;
        std::cout << "Кординаты верхнего правого угла: " << des.coordinate_x2 << " " << des.coordinate_y2 << std::endl;
        std::cout << "Координаты нижнего левого угла: " << des.coordinate_x3 << " " << des.coordinate_y3 << std::endl;
        std::cout << "Координаты нижнего левого угла: " << des.coordinate_x4 << " " << des.coordinate_y4 << std::endl;
    }

};