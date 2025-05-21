#pragma once

#include <iostream>

using namespace std;

class vector {
public:
vector(float x, float y);

float getX();

float getY();

void setVector (float x, float y);

void output ();

private:
float x, y;
};