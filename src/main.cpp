#include <iostream>
#include "vector/vector.h"

using namespace std;

int main () {
    cout << "Hello world" << endl;    

    vector v(1,2), v2(45, -13);

    v.output();
    v2.output();
    
    return 0;
}