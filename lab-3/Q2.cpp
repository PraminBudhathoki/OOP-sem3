//
// Created by pramin on 6/5/22.
//
// Create a class person with data member name,age, address and citizenship number.Write a constructor
// to initialize the value of person.Assign citizenship number if the age of the person is greater than
// 16 otherwise assign zero to citizenship number.Also create a function to display the value.
#include <iostream>
using namespace std;
class person{
    char name[30];
    char address[30];
    int age,ctzn_no;
   public:
        person(){
            ctzn_no =0;
        }
        void getData(){
            cout<<"Enter the name:-";
            cin>>name;
            cout<<"Enter the age:-";
            cin>>age;
            cout<<"Enter the address:-";
            cin>>address;
            if(age>16){
                ctzn_no=20;
            }
        }
        void displayData(){
            cout<<"The name of the person is"<<name<<endl;
            cout<<"The age of the person is"<<age<<endl;
            cout<<"The address of the person is"<<address<<endl;
            cout<<"The citizenship of the person is"<<ctzn_no<<endl;
        }
};

int main(){
    person p1;
    p1.getData();
    p1.displayData();
    return 0;
}
