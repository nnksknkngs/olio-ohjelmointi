#ifndef DOG_H
#define DOG_H
#include "animal.h"

class Dog : public Animal { // Perii luokan Animal
public:
    virtual void callOut() override;
    virtual ~Dog() override;
};

#endif // DOG_H
