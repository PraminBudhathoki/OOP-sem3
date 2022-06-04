//
// Created by pramin on 6/4/22.
//
//WAP that uses a function to swap the values of two variables. Use the function
//once with the reference variable and once with the normal variable and check
//which function swaps the value really.

#include <iostream>
using namespace std;
//void swap(int a,int b){           //doesnot work while passing the normal variable
//    int temp = a;
//    a=b;
//    b=temp;
//}
void swap(int &a,int &b){           //works while passing the reference
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    cout<<"Enter the values of a and b:-";
    cin>>a>>b;
    cout<<"the values before swap:= "<<a<<"\t"<<b<<endl;
    swap(a,b);
    cout<<"the values after  swap:= "<<a<<"\t"<<b<<endl;
    return 0;
}
