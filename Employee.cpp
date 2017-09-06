//
// Created by Ivan Acosta on 06/09/17.
//

#include "Employee.h"

#include "employee.h"
#include <string>
#include <iostream>
using namespace std;


employee::employee()
{
    _id = 00000;
    _firstName = "Juan";
    _lastName="Perez";
    _salary = 1000;
}

employee::employee(int id, string firstName, string lastName, int salary)
{
    _id = id;
    _firstName = firstName;
    _lastName = lastName;
    _salary = salary;
}

int employee::getID()
{
    return _id;
}

int employee::getSalary()
{
    return _salary;
}

int employee::getAnnualSalary()
{
    return _salary*12;
}

string employee::getLastName()
{
    return _lastName;
}

string employee::getFirstName()
{
    return _firstName;
}

string employee::getName()
{
    return _firstName + _lastName;
}


void employee::setSalary(int salary)
{
    _salary = salary;
}

int employee::RaiseSalary(int percent)
{
    _salary = int(_salary + _salary*(percent*0.01));
    return _salary;
}

string employee::Print()
{
    string print= "Employee: " + to_string(_id) + ", name: " +_firstName +" " +_lastName+ ", salary: " + to_string(_salary);
    return print;
}

employee::~employee()
{
}