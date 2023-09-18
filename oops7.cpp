#include <iostream>
using namespace std;
class MyClass {
private:
    static int cre;

public:
    MyClass() {
        cre++;
    }

    ~MyClass() {
        cre--;
    }

    static int getCre() {
        return cre;
    }
};

int MyClass::cre = 0;

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    cout<<"Number of objects created: "<<MyClass::getCre()<<endl;
    return 0;
}
