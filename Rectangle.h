//
// Created by Ivan Acosta on 06/09/17.
//
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
