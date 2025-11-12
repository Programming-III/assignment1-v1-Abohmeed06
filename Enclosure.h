#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include "Animal.h"
#include <iostream>
#include <string>

using namespace std;

class Enclosure {
    private:
        Animal* animal;
        int capacity;
        int currentCount;
    public:
        Enclosure();
        Enclosure(Animal* animal, int capacity, int currentCount);
        ~Enclosure();
        int getCapacity();
        void addAnimal(Animal* a);
        void displayAnimals();
};
#endif
