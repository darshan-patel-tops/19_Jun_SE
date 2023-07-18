#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Square square;

    shapePtr = &circle;
    shapePtr->draw();  // Calls the overridden draw() function in the Circle class

    shapePtr = &square;
    shapePtr->draw();  // Calls the overridden draw() function in the Square class

    return 0;
}
