//
// Created by pramin on 5/22/22.
//
//WAP to calculate the area of circle, Rectangle, triangle with overloaded function name area
#include <iostream>
#include <cmath>
#define PI 3.1415
using namespace std;
float area(float);
int area(int,int);
float area(int,int,int);
int main(){
    cout<<"THe area of circle of radius 5.0 is:-"<<area(5.0)<<endl;
    cout<<"THe area of rectangle of length 5 and breadth 2 is:-"<<area(5,2)<<endl;
    cout<<"THe area of a triangle with sides 4,5,6 respectively is:-"<<area(4,5,6)<<endl;
    return 0;
}
float area(float r){
    return  PI*r*r;
}
int area(int l,int b){
    return l*b;
}
float area(int a,int b, int c){
    int s= (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
