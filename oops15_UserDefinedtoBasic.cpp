#include <iostream>
using namespace std;
class MyType {
private:
    int value;

public:
    MyType(int val) : value(val) {}
    operator int() {
        return value;
    }
};

int main() {
    MyType myObj(42);
    int intValue = myObj;
    cout << "Converted integer value: " << intValue <<endl;
    return 0;
}
