#include <iostream>
#include <string>

using namespace std;

class vector {
public:
vector(float x, float y) {
    this->x = x;
    this->y = y;
}

float getX() {
    return this->x;
}

float getY() {
    return this->y;
}

void setVector (float x, float y) {
    this->x = x;
    this->y = y;
}

void output () {
    cout << "vector[x:" << this->x << ", y:" <<  this->y << "]" << endl;
}
private:
float x, y;
};