#include<iostream>
using namespace std;
 int byvalue(int a ,int b);

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
int  bypointer(int &e,int &f)
{
    int sol;
    sol = e + f;
    return sol;
}
int main()
{ int ans,cal,sol;
int c = 20;
int d = 30;
int e = 20;
int f = 30;
    
    cout<<"call by value : "<<endl;
    ans = byvalue(30,20);
    cout<<" "<<ans;
    cout<<"\ncall by reference : "<<endl;
    cal = byreference(c,d);
    cout<<" "<<cal;
    cout<<"\ncall by pointer : "<<endl;
    sol = bypointer(e,f);
    cout<<" "<<sol;


    
}
