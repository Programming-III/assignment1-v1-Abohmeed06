#ifndef VISITOR_H_INCLUDED
#define VISITOR_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Visitor {
    private:
        string visitorName;
        int ticketsBought;
    public:
        Visitor();
        Visitor(string vistorName, int ticketsBought);
        ~Visitor();
        string getVisitorName();
        int getTicketsBought();
        void displayInfo();
};
#endif
