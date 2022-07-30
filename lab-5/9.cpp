//
//
// Created by pramin on 6/18/22.
//
//
// WAP to add two matrices by overloading the + operator.
//
//
//
#include <iostream>
using namespace std;
class matrix{
    int a[3][3];
    public:
        matrix();                       //default constructor
        void set();                     //to set matrix elements
        void show();                    //to show matrix elements
        matrix operator +(matrix x);    //overloading + operator for addition
};
matrix::matrix(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=0;
        }
    }
}
void matrix::set(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"\n Enter the "<<(i+1)<<","<<(j+1)<<"element=";
            cin>>a[i][j];
        }
    }
}
void matrix::show(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<"\n";
    }
}
matrix matrix::operator+(matrix x){
    matrix c;                       //This will hold the result
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c.a[i][j]=a[i][j]+x.a[i][j];
        }
    }
    return c;
}

int main(){
    matrix a,b,c;
    a.set();
    b.set();
    c=a+b;
    cout<<"Matrix A= \n";
    a.show();
    cout<<"Matrix B= \n";
    b.show();
    cout<<"Matrix after addition= \n";
    c.show();
    return 0;
}
