//
//
// Created by pramin on 6/18/22.
//
//
// WAP to concatenate two strings using the concept of operator + overloading.
//
//
//
#include <iostream>
#include <string.h>
using namespace std;
class strings{
        char a[30];
    public:
        void read(){
            cout<<"Enter the string:-";
            cin>>a;
        }
        void display(){
            cout<<"The string is:-"<<a;
        }
        strings operator +(strings b){
            strings temp;
            strcpy(temp.a,strcat(a,b.a));
            return temp;
        }
};
int main(){
    strings s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1+s2;
    cout<<"After concatenation:\t";
    s3.display();
    return 0;
}
