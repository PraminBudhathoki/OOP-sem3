//
// Created by pramin on 6/5/22.
//
// WAP to count the number of objects created in the program.
// Also,illustrate the statement that constructor call is opposite of the destructor call.
#include <iostream>
using namespace std;
int count = 0;
class obj_count{
    public:
        obj_count(){
            count++;
            cout<<"Number of objects created:-"<<count<<endl;
        }
        ~obj_count(){
            cout<<"Number of objects destroyed:-"<<count<<endl;
            count--;
        }
};
int main(){
    {
        obj_count c;
    }
    obj_count c1,c2,c3,c4;
    return 0;
}

