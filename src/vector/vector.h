#pragma once

#include <iostream>
#include <string>

using namespace std;

class vector {
public:
vector(float x, float y);

float getX();

float getY();

void setVector (float x, float y);

void output ();

void inf(string s);

float length();

float scalar(vector& v);

float cos(vector& v);
private:
float x, y;
};