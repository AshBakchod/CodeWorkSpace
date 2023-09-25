#include<iostream>

class ClassA; // Forward declaration

class ClassB {
private:
    int valueB;
public:
    ClassB(int val) : valueB(val) {}

    friend void compareValues(ClassA, ClassB);
};

class ClassA {
private:
    int valueA;
public:
    ClassA(int val) : valueA(val) {}

    friend void compareValues(ClassA, ClassB);
};

void compareValues(ClassA objA, ClassB objB) {
    if (objA.valueA > objB.valueB) {
        std::cout << "ClassA has the greatest value." << std::endl;
    }
    else if (objA.valueA < objB.valueB) {
        std::cout << "ClassB has the greatest value." << std::endl;
    }
    else {
        std::cout << "Both classes have the same value." << std::endl;
    }
}

int main() {
    ClassA objA(5);
    ClassB objB(7);

    compareValues(objA, objB);

    return 0;
}
