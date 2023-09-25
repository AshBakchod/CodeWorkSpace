#include<iostream>
using namespace std;
class A; // Forward declaration

class B {
    int valueB;
public:
    B(int val){
        valueB=val;
    }

    friend void compareValues(A,B);
};

class A {
    int valueA;
public:
    A(int val){
        valueA=val;
    }

    friend void compareValues(A,B);
};

void compareValues(A a, B b) {
    if (a.valueA > b.valueB) {
    cout << "Class A has the greatest value." <<endl;
    }
    else if (a.valueA < b.valueB) {
    cout << "Class B has the greatest value." <<endl;
    }
    else {
    cout << "Both classes have the same value." <<endl;
    }
}

int main() {
    A objA(5);
    B objB(7);

    compareValues(objA, objB);

    return 0;
}
