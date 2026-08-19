#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
private:
    int id;
    std::string name;
    double salary;

public:
    Employee(int id, const std::string& name, double salary);

    int getId() const;
    std::string getName() const;
    double getSalary() const;
    void display() const;
};

#endif
