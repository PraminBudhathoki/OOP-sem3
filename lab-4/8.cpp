//
//
// Created by pramin on 6/11/22.
//
//
// WAP to swap two numbers of private data member of two different class using the concept of friend function.
//
//
#include <iostream>
using namespace std;

class second;

class first{
private:
    int a;
public:
    first(int x){a=x;}

    void show(){
        cout<<"a = "<<a<<endl;
    }

    void swap(second &);
};

class second{
private:
    int b;
public:
    second(int y){b = y;}

    void show(){
        cout<<"b = "<<b<<endl;
    }

    friend void first::swap(second&);
};

void first::swap(second& t){
    int temp = a;
    a = t.b;
    t.b = temp;
}

int main(){
    first f(23);
    second s(34);
    cout<<"Before swap:"<<endl;
    f.show();
    s.show();
    f.swap(s);
    cout<<"After swap:"<<endl;
    f.show();
    s.show();
    return 0;
}





