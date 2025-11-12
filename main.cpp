#include "Animal.h"
#include "Enclosure.h"
#include "Visitor.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"

#include <iostream>
#include <string>

using namespace std;

    Animal::Animal(){
        this->name = "";
        this->age = 0;
        this->isHungry = false;
    }
    Animal::Animal(string name, int age, bool isHungry){
        this->name = name;
        this->age = age;
        this->isHungry = isHungry;
    }
    Animal::~Animal(){}

    Animal::string getName(){
        return this->name;
    }
    Animal:: int getAge(){
        return this->age;
    }
    Animal::bool getIsHungry(){
        return this->isHungry;
    }
    Animal::void setIsHungry(bool hungry){
        isHungry = hungry;
    }
    Animal::void setName(string n){
        name = n;
    }
    Animal::void setAge(int a){
        age = a;
    }
    Animal::void feed(){
        if(getIsHungry() == false){
            cout << "is not hungry";
        }
        else{
            cout << "is hungry";

        }
    }
    Animal::void display(){
        cout << "Name: " << getName() << "Age: " << getAge() << "Feed: " << getIsHungry();
    }

    Mammal::Mammal(){
        this->furColor = "";
    }
    Mammal(string name, int age, bool isHungry, string furColr){
        this->furColor = furColor;
    }
    ~Mammal(){}
    Mammal::string getFurColor(){
        return this->furColor;
    }
    Mammal::void setFurColor(string color){
        this->furColor = color;
    }
    Bird::Bird(){
        this->wingSpan = 0.0;
    }
    Bird::Bird(string name, int age, bool isHungry, float wingSpan){
        this-> wingSpan = wingSpan ;
    }
    Bird::~Bird(){}
    Bird::float getWingSpan(){
        return wingSpan;
    }
    Bird::void setWingSpan(float n){
        wingSpan= n;
    }
    Reptile::Reptile(){
        isVenomous = false;
    }
    Reptile::Reptile(string name, int age, bool isHungry, bool isVenomous){
        this -> isVenomous = isVenomous;
    }
    Reptile::~Reptile(){}
    Reptile::bool getIsVenomous(){
        return this->isVenomous;
    }
    Reptile::void setIsVenomous(bool ven){
        isVenomous = ven;
    }
    Enclosure::Enclosure(){
        animal = new Animal*();
        capacity = 0;
        currentCount= 0;
    }
    Enclosure::Enclosure(Animal* animal, int capacity, int currentCount){
        this->animal = animal;
        this->capacity = capacity;
        this->currentCount= currentCount;
        }
    Enclosure::~Enclosure(){
            delete []animal;
        }
    Enclosure::void addAnimal(Animal* a){
        animal[capacity-1] = a;
    }
    Enclosure::void displayAnimals(){
        cout<< "Enclosure " + getCapcity() + " Animals: \n"; 
        for(int i =0 ; i<capacity; i++){
            animal[i].display();
        }
    }
    Visitor::Visitor(){
        this-> visitorName = "";
        this-> ticketsBought = 0;
    }
    Visitor::Visitor(string vistorName, int ticketsBought){
        this-> visitorName = visitorName;
        this-> ticketsBought = ticketsBought;
    }
    Visitor::~Visitor(){}
    Visitor::string getVisitorName(){
        return visitorname;
    }
    Visitor::int getTicketsBought(){
        return ticketsBought;
    }
    Visitor::void displayInfo(){
        cout << "Visitor Info\n" << getVisitorName() <<endl;
        cout << getTicketsBought();
    }

    int main(){
        Animal::displayInfo();
        Enclosure::displayAnimals();
        Visitor::displayInfo();
    }
