//
//
// Created by pramin on 6/18/22.
//
//
// WAP to overload the arithemetic operators(+,-,/,*).
//
//
//
#include <iostream>
using namespace std;
class Calc{
    float x;
    public:
        Calc(){}
        void getNum(){
            cout<<"Enter a number:-";
            cin>>x;
        }
        Calc operator + (Calc t){
            Calc temp;
            temp.x=x+t.x;
            return temp;
        }Calc operator - (Calc t){
            Calc temp;
            temp.x=x-t.x;
            return temp;
        }Calc operator * (Calc t){
            Calc temp;
            temp.x=x*t.x;
            return temp;
        }Calc operator / (Calc t){
            Calc temp;
            temp.x=x/t.x;
            return temp;
        }
        float show(){
            return x;
        }
};
int main(){
    Calc c1,c2,c3,c4,c5,c6;
    c1.getNum();
    c2.getNum();
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c6=c1/c2;
    cout<<"\n Their sum is "<<c3.show();
    cout<<"\n Their difference is "<<c4.show();
    cout<<"\n Their product  is "<<c5.show();
    cout<<"\n Their division is "<<c6.show();
    return 0;
}

