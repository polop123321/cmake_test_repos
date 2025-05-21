#pragma once

#include <iostream>
#include <string>

using namespace std;

class vector {
public:
//main constructor
vector(float x, float y);

//x getter
float getX();

//y getter
float getY();

//vector setter
void setVector (float x, float y);

//ouput vector in 1 line
void output ();

//get vector info
void inf(string s);

//length of vector
float length();

//scalar multiply
float scalar(vector& v);

//cosine between two vectors 
float cos(vector& v);

private:

//vector values
float x, y;
};