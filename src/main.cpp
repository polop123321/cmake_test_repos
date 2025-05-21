#include <iostream>
#include "vector/vector.h"

using namespace std;

int main () {
    cout << "Hello world" << endl;  

    cout << "Enter 2 vectors" << endl;

    cout << "vec1.x: ";

    float x1, y1, x2, y2;

    cin >> x1;

    cout << "vec1.y: ";

    cin >> y1;

    cout << "vec2.x: ";

    cin >> x2;

    cout << "vec2.y: ";

    cin >> y2;

    cout << endl;

    vector vec1(x1, y1), vec2(x2, y2);

    vec1.inf("vec1");

    cout << endl;

    vec2.inf("vec2");

    cout << endl;

    cout << "scalar vec1 vec2: " << vec1.scalar(vec2) << endl;

    cout << endl;

    cout << "cos vec1 vec2: " << vec1.cos(vec2) << endl;

    cout << endl;
    
    return 0;
}