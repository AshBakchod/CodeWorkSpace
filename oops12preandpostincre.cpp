#include <iostream>
using namespace std;

class Integer{
    int Value;
    
     public:
     Integer(){Value=0;}
     Integer(int val){Value=val;}

     // Overloading ++ for Pre-Increment
     int operator++() {
        ++Value;
        return Value;
     }

    // Overloading ++ for Post-Increment
    int operator++(int) {
          ++Value;
          int value = Value;
          return Value;
      }
      void show(){
          cout<<Value<<endl;
      }
  };

  int main()
  {
      Integer a,b(5);
      ++a;
      a.show();
      b++;
      b.show();
  }
