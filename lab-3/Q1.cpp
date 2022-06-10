//
// Created by pramin on 6/5/22.
//
//Create a class person with data members to represent their name and age.
//Use member functions to initialize and display these information.
#include <iostream>
#include <string.h>
using namespace std;
class person{
    private:
        int age;
        char name[30];
    public:
        void getData();
        void displayData();
};
void person::getData(){
    cout<<"Enter the name:-";
    cin>>name;
    cout<<"Enter the age:-";
    cin>>age;
}
void person::displayData(){
    cout<<"The name of the person is "<<name<<endl;
    cout<<"The age of the person is "<<age<<endl;
}
int main(){
    person p1,p2;
    p1.getData();
    p2.getData();
    p1.displayData();
    p2.displayData();
    return 0;
}

