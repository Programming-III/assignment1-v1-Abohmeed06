#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        string name; 
        int age ;
        bool isHungry;
    public:
        Animal();
        Animal(string name, int age, bool isHungry);
        ~Animal();
        string getName();
        int getAge();
        bool getIsHungry();
        void setIsHungry(bool hungry);
        void setName(string n);
        void setAge(int a);
        void display();
        void feed();
};
#endif
