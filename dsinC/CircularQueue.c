#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//structure name Organization and nested structure name Employee
struct Organization
{
    char organization[20];
    //organization ID
    int orgID;
    struct Employee
    {
        //employee ID, name, salary
        int id;
        char name[20];
        float salary;

    };
};
//two oraganization and each has  two employees

struct Organization org[2] = {{"ABC", 1, {1, "A", 1000}, {2, "B", 2000}},
                              {"XYZ", 2, {3, "C", 3000}, {4, "D", 4000}}};

//function to print the employee details
void printEmployee(struct Employee *emp)
{
    printf("Employee ID: %d", emp->id);
    printf("Employee Name: %s", emp->name);
    printf("Employee Salary: %f", emp->salary);
}

int main()
{
    //print the employee details
    printEmployee(&org[0].Employee);
    printEmployee(&org[1].Employee);
    return 0;
}
