#include "Employee.h"

Employee::Employee(int id, const std::string& name, double salary)
    : id(id), name(name), salary(salary)
{
}

int Employee::getId() const
{
    return id;
}

std::string Employee::getName() const
{
    return name;
}

double Employee::getSalary() const
{
    return salary;
}
