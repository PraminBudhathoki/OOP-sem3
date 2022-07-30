//
//
// Created by pramin on 6/18/22.
//
//
// WAP to overload relational operators(==,!=,>,<,>=,<=) to compare complex numbers.
//
//
//
#include <iostream>
#include <math.h>
using namespace std;
class complex{
        int real;
        int imag;
    public:
        void getdata(){
            cout<<"Enter real value";
            cin>>real;
            cout<<"Enter imaginary value";
            cin>>imag;
        }
        float operator>(complex c){
            return(real>c.real|| imag>c.imag)?1:0;
        }
        float operator<(complex c){
            return(real<c.real|| imag<c.imag)?1:0;
        }
        float operator==(complex c){
            return(real==c.real|| imag==c.imag)?1:0;
        }
        float operator!=(complex c){
            return(real!=c.real|| imag!=c.imag)?1:0;
        }
        float operator<=(complex c){
            return(real<=c.real|| imag<=c.imag)?1:0;
        }
        float operator>=(complex c){
            return(real>=c.real|| imag>=c.imag)?1:0;
        }
        void display(){
            if(imag<0)
                cout<<"\n"<<real<<"-j"<<(imag*-1);
            else
                cout<<"\n"<<real<<"+j"<<imag;
        }
};
int main(){
    complex d1,d2;
    d1.getdata();
    d2.getdata();
    d1.display();
    cout<<endl;
    d2.display();
    if(d1<d2)
        cout<<endl<<"First complex number is smaller";
    if(d1>d2)
        cout<<endl<<"First complex number is greater";
    if (d1==d2)
        cout<<endl<<"Both complex number are equal";
    if (d1!=d2)
        cout<<endl<<"Both complex number are unequal";
    if (d1<=d2)
        cout<<endl<<"First complex number is less than or equal";
    if (d1>=d2)
        cout<<endl<<"First complex number is greater than or equal";
    return 0;
}
