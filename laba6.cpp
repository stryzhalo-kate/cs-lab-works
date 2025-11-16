#define _USE_MATH_DEFINES   
#include <iostream>
#include <format>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std; 

void about ();
bool CanBrickPath(double a, double b, double c, double x,double y );
bool CheckProfile( double p1, double p2, double w1, double w2);

int main(){
    system("chcp 65001");
   
    double a1=4, b1=6,  c1=7;
    double x1=8, y1=6;
    bool result1 = CanBrickPath(a1, b1, c1, x1, y1);

    cout << ("Тестуванння") << endl;
    cout << ("Розміри цеглини :") << a1<< " "<<b1<<" "<<c1<<endl;
    cout << ("Розміри вікна :") << x1 << " " << y1<<endl;
    cout << ("Чи зможе цеглина пройти?")<< boolalpha <<" "<<result1<< endl;

    double a2=9, b2=8, c2=11;
    double x2=3, y2=9;
     bool result2 = CanBrickPath(a2, b2, c2, x2, y2);
    
    cout << ("Розміри цеглини :") << a2<< " "<<b2<<" "<<c2<< endl;
    cout << ("Розміри вікна :") << x2 << " " << y2<< endl;
    cout << ("Чи зможе цеглина пройти?")<<boolalpha << " "<<result2<< endl;

    double a3=11, b3=7, c3=5;
    double x3=6, y3=9;
     bool result3 = CanBrickPath(a3, b3, c3, x3, y3);
    
    cout << ("Розміри цеглини :") << a3<< " "<<b3<<" "<<c3<< endl;
    cout << ("Розміри вікна :") << x3 << " " << y3<< endl;
    cout << ("Чи зможе цеглина пройти?")<< boolalpha <<" "<< result3<< endl;

 return 0;
}

void about(){
    cout<< ("Перевірка проходження цеглини у вікно")<< endl;
    
}


bool CheckProfile( double p1, double p2, double w1, double w2){

 
     if(w1>w1) {
   
        swap(w1, w2);
     }
     
     if(p1>p2){
            swap(p1,p2);
        
     }
   return (p1 <= w1) && (p2 <= w2);
}

bool CanBrickPath(double a, double b, double c, double x,double y ){
    return CheckProfile(a, b, x, y) or
           CheckProfile(a, c, x, y) or
           CheckProfile(b, c, x, y);
}