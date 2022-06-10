//
// Created by pramin on 6/4/22.
//
// WAP to show the concept of enumerated datatype.
#include <iostream>
using namespace std;
enum day_of_week{
    sun,mon,tue,wed,thrus,fri,sat
};
int main(){
    day_of_week day1,day2;
    day1=sun;
    day2=fri;
    int diff=day2-day1;
    cout<<"Days between= "<<diff<<endl;
    return 0;
}


