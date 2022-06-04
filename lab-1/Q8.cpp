//
// Created by pramin on 5/22/22.
//
//Write a function power to raise a number m to the power n. The function takes a default value of 2 for n
//to make the function to calculate squares when the argument is omitted.Write a main that gets a value of
//m and n from the user to test the function.
#include <iostream>
#include <math.h>
using namespace std;
float power(int m,int n=2){
    return(pow(m,n));
}
int main(){
    int m,n;
    cout<<"Enter the values of m and n:-";
    cin>>m>>n;
    cout<<"The square is:- "<<power(m)<<endl;
    cout<<"the nth power of m is:- "<<power(m,n)<<endl;
}
