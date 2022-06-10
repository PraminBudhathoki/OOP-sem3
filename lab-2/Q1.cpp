//
// Created by pramin on 6/4/22.
//
// WAP to show the concept of inline function.
#include <iostream>
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
inline int min(int a,int b){
    return (a<b)?a:b;
}

int main(){
    int a=10,b=20;
    cout<<"The maximum value is: "<<max(a,b);
    cout<<"\nThe minimum value is: "<<min(a,b);
    return 0;
}

