/*
   Materia: Gráficas Computacionales
   Fecha: 23 de agosto del 2017
   Autor: A01019861 Alumno Iván E. Acosta
 */

#pragma once
#include <string>
#include <iostream>
using namespace std;
// prueba de Github 2
class circle
{
public:
    circle();
    circle(double r);
    double getRadius();
    double getArea();
    string getColor();
    void setRadius(double radius);
    void setColor(string color);
    ~circle();

private:
    double _radius;
    string _color;
};
