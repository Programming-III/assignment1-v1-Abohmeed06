#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include "Animal.h"

#include <iostream>
#include <string>

using namespace std;

class Bird : public Animal{
    private:
        float wingSpan;
    public:
        Bird();
        Bird(float wingSpan);
        ~Bird();
        float getWingSpan();
        void setWingSpan(float n);
};
#endif
