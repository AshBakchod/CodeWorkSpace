//Basic Data Type to User Defined
#include <iostream>
using namespace std;
class Time{
    int hour;
    int min;
    
    public:
    Time(){hour=0;min=0;}
    Time(int h,int m){
        hour=h;
        min=m;
    }
    Time(int t){
        hour=t/60;
        min=t%60;
    }
    
    void show(){
        cout<<"Time is : "<<hour<<" hours and "<<min<<" minutes"<<endl;
    }
};
int main() {
    Time t1(2,45),t2;
    int minutes = 134;
    t2 = minutes;
    t1.show();
    t2.show();
    return 0;
}
