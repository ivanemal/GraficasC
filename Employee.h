/*
Materia: Gráficas Computacionales
Fecha: 23 de agosto del 2017
Autor: A01019861 Alumno Iván E. Acosta
*/

#pragma once
#include <string>
#include <iostream>
using namespace std;

class employee
{
public:
    employee();
    employee(int id, string firstName, string lastName, int salary);
    int getID();
    int getSalary();
    int getAnnualSalary();
    string getLastName();
    string getFirstName();
    string getName();

    void setSalary(int salary);
    int RaiseSalary(int percent);
    string Print();
    ~employee();

private:
    int _id;
    string _firstName;
    string _lastName;
    int _salary;
};


