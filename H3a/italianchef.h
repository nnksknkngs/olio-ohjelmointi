#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef { // Perii luokan Chef
public:
    ItalianChef(const string & chefName); // Konstruktori
    ~ItalianChef(); // Destruktori
    // Metodit:
    string getName() const;
    void makePasta();
};

#endif // ITALIANCHEF_H
