// EXplicit Type Conversion from User Defined Data Type to User Defined Data Type
#include <iostream>
using namespace std;
class Inch;
class Meter{
    double mts;
    public:
    Meter(double m){
        mts=m;
    }
    void show(){
        cout<<"The Length in Meters is : "<<mts<<endl;
    }
    friend class Inch;
};
class Inch{
    double inchs;
    public:
    Inch(){inchs=0;}
    
    Inch(Meter m){
       inchs=m.mts*39.373;
    }
    void show(){
        cout<<"The Length in Inches is : "<<inchs<<endl;
    }
};

int main() {
    Meter m(4);
    Inch i(m);
    m.show();
    i.show();
    return 0;
}
