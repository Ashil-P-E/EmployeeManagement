#include "Employee.h"
#include <iostream>
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


void Employee::display() const
{
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Salary: " << salary << '\n';
}
