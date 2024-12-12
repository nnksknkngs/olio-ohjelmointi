#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "ClassB.h"
#include <string>
using namespace std;

class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGREGATIONA_H
