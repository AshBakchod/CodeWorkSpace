#include <iostream>
using namespace std;
class B;
class A{
    int data;
    public :
    void set(int elem){
        data=elem;
    }
    void display(){
        cout<<"The Data Member of Class A is : "<<data<<endl;
    }
    friend void swap(A&a , B&b);
};
class B{
    int data;
    public :
    void set(int elem){
        data=elem;
    }
    void display(){
        cout<<"The Data Member of Class B is : "<<data<<endl;
    }
     friend void swap(A&a , B&b);
};
 void swap(A&a , B&b){
    int temp=a.data;
    a.data=b.data;
    b.data=temp;
}
int main() {
    A a;
    B b;
    int data1;
    cout<<"Enter data of A class : ";
    cin>>data1;
    a.set(data1);
     int data2;
    cout<<"Enter data of B class : ";
    cin>>data2;
    b.set(data2);
    
    a.display();
    b.display();
    
    cout<<"Swapping values of A and B"<<endl;
    swap(a,b);
    
    a.display();
    b.display();
    
    return 0;

}
