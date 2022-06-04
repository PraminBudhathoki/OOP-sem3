//
// Created by pramin on 5/21/22.
//
// WAP to set a structure to hold a date(mm,dd,yy),assign values to the member of the structure and print
// out the value in the format 11/24/2001 by function.Pass the structure to the function.

#include <iostream>
using namespace std;
struct date{
    int dd,mm,yy;
};

void displayDate(date d1){
    cout<<"The provided date is:- "<<d1.mm<<"/"<<d1.dd<<"/"<<d1.yy;
}
int main() {
    date d1;
    cout<<"Enter the day:-";
    cin>>d1.dd;
    cout<<"Enter the month:-";
    cin>>d1.mm;
    cout<<"Enter the year:-";
    cin>>d1.yy;
    displayDate(d1);
    return 0;
}
