#ifndef MAMMAL_H_INCLUDED
#define MAMMAL_H_INCLUDED
#include "Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Mammal : public Animal{
    private:
        string furColor;
    public:
        Mammal();
        Mammal(string furColr);
        ~Mammal();
        string getFurColor();
        void setFurColor(string color);
};
#endif
