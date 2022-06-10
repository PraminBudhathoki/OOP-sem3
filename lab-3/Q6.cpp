//
// Created by pramin on 6/5/22.
//
//  WAP to add and subtract two time objects and return the result object.
//
#include <iostream>
using namespace std;
class time_class{
    int hrs,mins,secs;
    public:
        time_class(){};
        time_class(int h,int m,int s){
            hrs=h;
            mins=m;
            secs=s;
        }
        time_class addTime(time_class t1,time_class t2){
            time_class temp;
            t1.secs=t1.hrs*3600+t1.mins*60+t1.secs;
            t2.secs=t2.hrs*3600+t2.mins*60+t2.secs;
            temp.hrs=(t2.secs+t1.secs)/3600;
            temp.mins=((t2.secs+t1.secs)%3600)/60;
            temp.secs=((t2.secs+t1.secs)%3600)%60;
            return temp;
        }time_class subTime(time_class t1,time_class t2){
            time_class temp;
            t1.secs=t1.hrs*3600+t1.mins*60+t1.secs;
            t2.secs=t2.hrs*3600+t2.mins*60+t2.secs;
            temp.hrs=(t2.secs-t1.secs)/3600;
            temp.mins=((t2.secs-t1.secs)%3600)/60;
            temp.secs=((t2.secs-t1.secs)%3600)%60;
            return temp;
        }
        void showData(){
            cout<<"The time in hrs:- "<<hrs<<" minute:- "<<mins<<" and seconds:- "<<secs<<endl;
        }
};
int main(){
    time_class a(2,49,30),b(2,10,30),c;
    c=c.addTime(a,b);
    cout<<"After adding:"<<endl;
    c.showData();
    cout<<"After subtracting:"<<endl;
    c=c.subTime(a,b);
    c.showData();
    return 0;
}
