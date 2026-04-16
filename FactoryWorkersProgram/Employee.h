#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

class Employee
{
private:
    std::string name;
    int number;

    int yearHired;
    int monthHired;
    int dayHired;

public:
    Employee(std::string name, int num, int m, int d, int y);

    void setName(std::string newName);
    void setNumber(int newNum);
    void setDateHired(int m, int d, int y);

    // Accessor functions
    inline std::string getName()
    {
        return name;
    }
    inline int getNumber()
    {
        return number;
    }
    inline std::string getDateHired()
    {
        std::string date = std::to_string(monthHired) + '/' + std::to_string(dayHired) + '/' + std::to_string(yearHired); // Formats date in mm/dd/yyyy
        return date;
    }

    void printEmployee();

};
#endif // EMPLOYEE_H
