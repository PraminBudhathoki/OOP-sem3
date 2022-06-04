//
// Created by pramin on 5/22/22.
//
//WAP to calculate the volume of a cube, cuboid and cylinder using the concept of function overloading.
#include <iostream>
#define PI 3.1413
using namespace std;
int volume(int);
int volume(int,int,int);
float volume(int,int);
int main(){
    cout<<"Volume of a cube of side 5cm:-"<<volume(5)<<endl;
    cout<<"Volume of a cuboid of length 15cm, breadth 10cm and height 5cm:-"<<volume(15,10,5)<<endl;
    cout<<"Volume of a cylinder of radius 5cm and height 12cm:-"<<volume(5,12)<<endl;
}
int volume(int l){
    return  l*l*l;
}
int volume(int l,int b,int h){
    return l*b*h;
}
float volume(int r, int h){
    return PI*r*r*h;
}