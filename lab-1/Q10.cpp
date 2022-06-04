//
// Created by pramin on 6/4/22.
//
//WAP that displays the current monthly salary of each of executive officer, information officer, system analyst, and programmer that has been increased
//by 9,10,12 and 12 percentage respectively in year 2019.Let us assume that the salaries in 2003 are:
//
//    CEO  = Rs.80000/m
//    IO  = Rs.40000/m
//    System Analyst  = Rs.80000/m
//    Programmer  = Rs.25000/m
//  use default argument


#include <iostream>
using namespace std;
void salary(int years,int ceo=80000,int io=40000,int SA=80000,int P=80000){
    for(int i=0;i<years;i++){
        ceo += 0.09*ceo;
        io += 0.10*io;
        SA += 0.12*SA;
        P += 0.12*P;
    }
    cout<<"The current salary of CEO is "<< ceo<<endl;
    cout<<"The current salary of information analyst is "<< io<<endl;
    cout<<"The current salary of CEO is "<< SA<<endl;
    cout<<"The current salary of CEO is "<< P<<endl;
}
int main(){
    int years = 2019-2003;
    salary(years);
    return 0;
}
