// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
using namespace std;

class Student{
  protected:
  string name;
  int roll;
  void set(string n , int r){
      name=n;
      roll=r;
      cout<<"Name : "<<name<<endl;
      cout<<"Roll Number : "<<roll<<endl;
  }
};
class SubMarks : virtual public Student{
    protected:
  int getSubMarks(){
      cout<<"Enter the marks in 5 subjects out of 100 "<<endl;
      int temp = 0;
      int marks=0;
      for(int i=0;i<5;i++){
          cin>>temp;
          marks+=temp;
      }
      return marks;
  }
};
class SportsMarks : virtual public Student{
  protected:
  int getSportsMarks(){
      int marks=0;
      cout<<"Enter the marks in Sports out of 100 "<<endl;
      cin>>marks;
      return marks;
  }
};
class Result : public SportsMarks , public SubMarks{
    int percent;
    public:
    Result(){
        string n ; int r;
        cout<<"Enter the name and roll number of the student : ";
        cin>>n;
        cin>>r;
        set(n,r);
    }
    void display(){
        int sub = getSubMarks();
        int spo = getSportsMarks();
        string n = this->name;
        percent = (sub+spo)/6;
        cout<<"The Percentage of "<<name<<" is : "<<percent<<endl;
    }
};
int main() {
    Result r;
    r.display();
    return 0;
}
