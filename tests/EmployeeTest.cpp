#include <gtest/gtest.h>
#include "Employee.h"

TEST(EmployeeTest, EmployeeId)
{
    Employee employee(1, "Ashil", 50000);

    EXPECT_EQ(employee.getId(), 1);
}

TEST(EmployeeTest, EmployeeName)
{
    Employee employee(1, "Ashil", 50000);

    EXPECT_EQ(employee.getName(), "Ashil");
}

TEST(EmployeeTest, EmployeeSalary)
{
    Employee employee(1, "Ashil", 50000);

    EXPECT_EQ(employee.getSalary(), 50000);
}