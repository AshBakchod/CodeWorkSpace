#include <iostream>
using namespace std;
class ComplexNo{
    int real;
    int imaginary;
    public :
    void set(int re , int img){
        real=re;
        imaginary=img;
    }
    void display(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
    friend ComplexNo addComplex(ComplexNo&a1 , ComplexNo&a2);
};
 ComplexNo addComplex(ComplexNo&a1 , ComplexNo&a2){
   ComplexNo ans;
   ans.real=a1.real+a2.real;
   ans.imaginary=a1.imaginary+a2.imaginary;
   return ans;
}
int main() {
  ComplexNo a,b,c;
  cout<<"Enter the real and imaginary part of First Complex Number"<<endl;
  int r,i;
  cin>>r>>i;
  a.set(r,i);
  cout<<"The first Complex Number is : "<<endl;
  a.display();
  
   cout<<"Enter the real and imaginary part of Second Complex Number"<<endl;
  cin>>r>>i;
  b.set(r,i);
   cout<<"The second Complex Number is : "<<endl;
  b.display();
  
  
  c=addComplex(a,b);
  
  cout<<"The added Complex Number is : "<<endl;
  c.display();
  
    return 0;

}
