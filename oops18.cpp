#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void display(){
        cout<<"This is a Shape"<<endl;
    }
};
class Circle : public Shape{
    public:
    void display(){
        cout<<"This is a Circle"<<endl;
    }
};
class Rectangle : public Shape{
    public:
    void display(){
        cout<<"This is a Rectangle"<<endl;
    }
};
int main(){
    Shape *s;
    Shape sh;
    s=&sh;
    s->display();
    Circle c;
    Rectangle r;
    s=&c;
    s->display();
    s=&r;
    s->display();
}

