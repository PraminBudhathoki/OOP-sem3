//
// Created by pramin on 6/5/22.
//
//WAP to find area of a triangle(when its sides are given) using the concept of overloaded constructor.
#include<iostream>
#include<math.h>
using namespace std;
class area{
    int a,b,c;
    float s,result;
    public:
        area(int x,int y,int z){
            a=x;
            b=y;
            c=z;
        }
        area(area &p){
            a=p.a;
            b=p.b;
            c=p.c;
        }
        void calc(){
            s=(a+b+c)/2;
            result=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<"The area of Triangle is:-"<<result<<endl;
        }
};
int main(){
    int p,q,r;
    cout<<"Enter the first side:-";
    cin>>p;
    cout<<"Enter the second side:-";
    cin>>q;
    cout<<"Enter the third side:-";
    cin>>r;

    area a1(p,q,r);
    return 0;
}
