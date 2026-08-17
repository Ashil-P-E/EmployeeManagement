#include <iostream>
#include "Employee.h"

int main()
{
    Employee employee(1, "Ashil", 50000);

    std::cout << "ID: " << employee.getId() << '\n';
    std::cout << "Name: " << employee.getName() << '\n';
    std::cout << "Salary: " << employee.getSalary() << '\n';

    return 0;
}
