//
// Created by Ivan Acosta on 06/09/17.
//

#pragma once
#include <string>
#include <iostream>
using namespace std;

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
