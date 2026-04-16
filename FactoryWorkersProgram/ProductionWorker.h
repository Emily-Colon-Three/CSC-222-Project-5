#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
#include <string>

const int DAYSHIFT = 1;
const int NIGHTSHIFT = 2;

class ProductionWorker : public Employee
{
private:
    int timeOfShift;
    float payPerHour;

public:
    ProductionWorker();

    inline int getShift()
    {
        return this->timeOfShift;
    }
    inline float getWage()
    {
        return this->payPerHour;
    }

    void setShift();
    void setWage();

    void printProductionWorker() const;
};
#endif // PRODUCTIONWORKER_H
