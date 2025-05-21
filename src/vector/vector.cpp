#include <cmath>
#include "vector.h"

using namespace std;

vector::vector(float x, float y) {
    this->x = x;
    this->y = y;
}

float vector::getX() {
    return this->x;
}

float vector::getY() {
    return this->y;
}

void vector::setVector(float x, float y) {
     this->x = x;
     this->y = y;
}

void vector::output() {
     cout << "vector[x:" << x << ", y:" << y << "]" << endl;
}

void vector::inf(string s) {
    cout << "vector '" << s << "':" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "length: " << length() << endl;
}

float vector::length() {
    return sqrt(x * x + y * y);//Pifagor's theorem
}

float vector::scalar(vector& v) {
    return this->x * v.getX() + this->y * v.getY();//Vector scalar multiply operation
}

float vector::cos(vector& v) {
    return scalar(v) / (length() * v.length());//cosA = ab/(|a||b|), where a and b - vectors
}