#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include "Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Reptile : public Animal{
    private:
        bool isVenomous;
    public:
        Reptile();
        Reptile(bool isVenomous);
        ~Reptile();
        bool getIsVenomous();
        void setIsVenomous(bool ven);
};
#endif
