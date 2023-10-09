#include <iostream>
using namespace std;
class Integer {
    int value;
public:
    Integer(int data){
        value=data;
    }
    friend int convert(Integer &i);
};
    int convert(Integer &i){
        return i.value;
    }

int main() {
    Integer obj(42);
    int myInt;

    myInt = convert(obj);
    cout<<"The Value of My Integer is : "<<myInt<<endl;
    return 0;
}
