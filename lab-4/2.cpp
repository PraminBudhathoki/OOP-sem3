//
//
// Created by pramin on 6/11/22.
//
// In the program  with class name.
//      a. Create two initialized objects (using parameterized constructor)
//      b. Create a pointer to time object.
//      c. Make the poiter point to a new pointer object.(using default constructor)
//      d. Call the function add(time,time) to store the sum in pointer to object.
//      e. Call the function display() using pointer to object and delete the pointer to object.
#include <iostream>
using namespace std;
class time {
private:
    int hr, min, sec;
public:
    time(){}
    time(int h, int m, int s){
        hr = h;
        min = m;
        sec = s;
    }

    void addTime(time,time);

    void showTime(){
        cout<<"\nTime: "<<hr<<":"<<min<<":"<<sec;
    }
};

void time::addTime(time a, time b){
    hr = a.hr + b.hr;
    min = a.min + b.min;
    sec = a.sec + b.sec;
    if (sec>=60) {
        min += 1;
        sec -= 60;
    }
    if (min>=60) {
        hr += 1;
        min -= 60;
    }
}

int main(){
    time t1(4,30,40);
    time t2(3,30,30);
    time* tp;
    tp = new time;
    tp->addTime(t1, t2);

    tp->showTime();

    delete tp;

    return 0;
}




