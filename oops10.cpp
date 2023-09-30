
#include <iostream>
using namespace std;
class Integer{
    int data;
    public:
    Integer(int val){
        data=val;
    }
    Integer& operator++(){
        ++data;
        return 
        *this;
    }
    void show(){
        cout<<"The Value of Integer is : "<<data<<endl;
    }
};
int main() {
    Integer a(2);
    a.show();
    Integer b = ++a;
    b.show();
    return 0;
}
