/*
Materia: Gráficas Computacionales
Fecha: 23 de agosto del 2017
Autor: A01019861 Alumno Iván E. Acosta
*/
#include "Rectangle.h"

rectangle::rectangle()
{
    _width = 1.0;
    _height = 1.0;
}

rectangle::rectangle(float width, float height)
{
    _width = width;
    _height = height;
}

float rectangle::getWidth()
{
    return _width;
}

float rectangle::getHeight()
{
    return _height;
}

float rectangle::getArea()
{
    return _width*_height;
}

float rectangle::getPerimeter()
{
    return (2*_width)+(2*_height);
}

void rectangle::setHeight(float height)
{
    _height = height;
}

void rectangle::setWidth(float width)
{
    _width = width;
}


rectangle::~rectangle()
{
}