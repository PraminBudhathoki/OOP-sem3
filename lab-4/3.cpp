//
//
// Created by pramin on 6/11/22.
//
//
// How DMA can be done for objects and array of objects.Write a program to illustrate this concept.
//
//
#include <iostream>
using namespace std;
class person{
    private:
        char name[40];
    public:
        void setName(){
            cout<<"\n Enter name:";
            cin>>name;
        }
        void printName(){
            cout<<"\n Name is:"<<name;
        }
};
int main(){
    person *persptr;
    int n=2,i=0;
    char choice;
    persptr = new person[n];
    do{
        persptr[i].setName();
        i++;
    }while(i<2);
    for(int j=0;j<n;j++){
        cout<<"\nPerson number"<<j+1;
        persptr[j].printName();
    }
    cout<<endl;
    return 0;
}
