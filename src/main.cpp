#include <iostream>
#include "vector/vector.h"

using namespace std;

int main () {
    cout << "Hello world" << endl;

    cout << "Enter 2 vectors" << endl;

    cout << "vec1.x: ";

    float x1, y1, x2, y2;//default values

    cin >> x1;

    cout << "vec1.y: ";

    cin >> y1;

    cout << "vec2.x: ";

    cin >> x2;

    cout << "vec2.y: ";

    cin >> y2;

    cout << endl;

    vector vec1(x1, y1), vec2(x2, y2);//creating objects (vectors)

    vec1.inf("vec1");//output vector1 details

    cout << endl;

    vec2.inf("vec2");//output vector2 details

    cout << endl;

    cout << "scalar vec1 vec2: " << vec1.scalar(vec2) << endl;//output vectors scalar multiply result

    cout << endl;

    cout << "cos vec1 vec2: " << vec1.cos(vec2) << endl;//output cos of angle between vectors

    cout << endl;

    init();
    
    return 0;//end program
}

void init() {
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
}