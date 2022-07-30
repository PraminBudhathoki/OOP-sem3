//
//
// Created by pramin on 6/18/22.
//
//
// WAP to generate fibonacci series using operator overloading of (++) operator.
// Which type of overloading is it.
//
//
#include <iostream>
using namespace std;
class fibo{
        int t1,t2,nt;
    public:
        fibo(){
            t1=0;
            t2=1;
        }
        void operator ++(int){
            cout<<t1<<" ";
            nt=t1+t2;
            t1=t2;
            t2=nt;
        }

};
int main(){
    fibo f;

    //first 10 terms of fibonacci series
    for(int i=0;i<10;i++){
        f++;
    }
    return 0;
}
