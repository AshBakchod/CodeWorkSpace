#include<iostream>
using namespace std;

int byvalue(int a,int b)
{
    int value;
    value= a + b;
    return value;
}
int byreference(int &c,int &d)
{
    int sol;
    sol = c + d;
    return sol;

}
int  bypointer(int*e,int *f)
{
    int sol;
    sol = *e + *f;
    return sol;
}
int main()
{ int ans,cal,sol;
int c = 20;
int d = 30;
int*e = &c;
int*f = &d;
    
    cout<<"Call by value : "<< byvalue(30,20)<<endl;
    
    cout<<"Call by reference : "<<byreference(c,d)<<endl;
    
    cout<<"Call by pointer : "<<bypointer(e,f)<<endl;
    
}
