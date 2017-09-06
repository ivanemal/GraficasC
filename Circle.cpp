//
// Created by Ivan Acosta on 06/09/17.
//

#include "circle.h"
#include <string>
#include <iostream>
using namespace std;

circle::circle()
{
    _radius = 1.0;
    _color = "red";
}

circle::circle(double r)
{
    _radius = r;
    _color = "red";
}

double circle::getRadius()
{
    return _radius;
}

double circle::getArea()
{
    return 3.1416*_radius*_radius;
}

string circle::getColor()
{
    return _color;
}

void circle::setRadius(double radius)
{
    _radius = radius;
}

void circle::setColor(string color)
{
    _color = color;
}


circle::~circle()
{
}

