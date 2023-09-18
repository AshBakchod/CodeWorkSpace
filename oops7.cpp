// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Object{
    int data;
    static int cre,des;
    public:
    Object(){
         cre++; cout<<"the number of Objects created : "<<cre<<endl;
    }
    Object(int a){
        data=a;
        cre++; cout<<"the number of Objects created : "<<cre<<endl;
    }
    ~Object(){
        des++;
        cout<<"the number of Objects destroyed : "<<des<<endl;
    }
    void show(){
        cout<<"The Data Value is : "<<data<<endl;
    }
};
int Object::cre;
int Object::des;
int main() {
    // Write C++ code here
    Object c1,c2(4),c3;
    c2.show();
    return 0;
}
