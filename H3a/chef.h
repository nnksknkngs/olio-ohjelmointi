#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>
using namespace std;

class Chef {
protected:
    string name;
public:
    Chef(const string & chefName);
    ~Chef();
    // Metodit:
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
