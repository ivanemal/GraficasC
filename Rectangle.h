/*
Materia: Gráficas Computacionales
Fecha: 23 de agosto del 2017
Autor: A01019861 Alumno Iván E. Acosta
*/
#pragma once
#include <string>
#include <iostream>
using namespace std;

class rectangle
{
public:
    rectangle();
    rectangle(float width, float height);
    float getWidth();
    float getHeight();
    float getArea();
    float getPerimeter();
    void setHeight(float height);
    void setWidth(float width);
    ~rectangle();

private:
    float _width;
    float _height;
};
