#include <iostream>

class MyClass {
public:
    // Constructor with one argument
    MyClass(int a) {
        this->a = a;
        this->b = 0;
        std::cout << "Constructor with one argument called\n";
    }

    // Constructor with two arguments
    MyClass(int a, int b) {
        this->a = a;
        this->b = b;
        std::cout << "Constructor with two arguments called\n";
    }

    void display() {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }

private:
    int a;
    int b;
};

int main() {
    // Using the constructor with one argument
    MyClass obj1(5);
    obj1.display();

    // Using the constructor with two arguments
    MyClass obj2(3, 8);
    obj2.display();

    return 0;
}
