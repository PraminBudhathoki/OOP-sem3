//
//
// Created by pramin on 6/18/22.
//
//
// Create a class having an array as member. Overload index operator([]) to input and display the element in the array
//
//
//
#include <iostream>
using namespace std;
class array{
    int data[5];
    public:
        void input(){
            cout<<"Enter 5 integers:"<<endl;
            for(int i=0;i<5;i++){
                cin>>data[i];
            }
        }
        int operator[](int index){
            return data[index];
        }
};
int main(){
    array a;
    a.input();
    cout<<"Showing the elment stored in an array"<<endl;
    for(int i=0;i<5;i++){
        cout<<"\n data["<<i<<"] element is "<<a[i];
    }
    return 0;
}
