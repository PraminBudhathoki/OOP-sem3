//
//
// Created by pramin on 6/18/22.
//
//
// WAP that will add object of data class(with members day,month and year) using operator overloading.
// Make another function to find the number of days in between two dates by overloading operator.
//
//
#include <iostream>
using namespace std;
class date{
        int year,month,day;
    public:
        void getData(){
            cout<<"\n Enter the year,month and day:";
            cin>>year>>month>>day;
        }
        void display(){
            cout<<endl<<"Year:-"<<year<<endl<<"Month:-"<<month<<endl<<"\n Day:-"<<day;
        }
        date operator+(date d){
            date temp;
            temp.day=day+d.day;
            temp.month=month+d.month+temp.day/30;
            temp.day=temp.day%30;
            temp.year=year+d.year+temp.month/12;
            temp.month=temp.month%12;
            return temp;
        }
        friend int operator-(date,date);
};
int operator-(date d1,date d2){
    int total =0;
    total = d1.day-d2.day;
    total = total+(d1.month-d2.month)*12;
    total = total+(d1.year-d2.year)*365;
    return total;
}

int main(){
    date d1,d2,d3;
    int day;
    cout<<"\n Enter  the start date:";
    d1.getData();
    d3=d2+d1;
    cout<<"\n Enter the stop date";
    d2.getData();
    d3=d2+d1;
    cout<<"\n The sum of two date is:";
    d3.display();
    day=d2-d1;
    cout<<"\n Enter the days between two date is:"<<day;
    return 0;
}
