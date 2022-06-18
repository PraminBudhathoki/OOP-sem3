//
//
// Created by pramin on 6/11/22.
//
// Write a single program explaining the use of dynamic memory allocation which should include calcualtion
// of marks of 5 subjects of students and displaying the result of pass or fail.
// (Pass marks is 45 out of 100 in each subjects)
//
#include <iostream>
using namespace std;
class student {
private:
    int* marks;
    bool isPass;
public:
    void getMarks(){
        marks = new int[5];
        for (int i = 0; i<5; i++){
            cout<<"Enter marks obtained in subject "<<i+1<<" : " ;
            cin>>marks[i];
        }
    }
    void display(){
        for (int i = 0; i < 5; i++)
        {
            if (marks[i]<45){
                isPass = 0;
                break;
            }
            else
                isPass = 1;
        }
        if (isPass)
            cout<<"Pass!";
        else
            cout<<"Fail!";
        delete marks;
    }
};

int main(){
    student s;
    s.getMarks();
    s.display();

    return 0;
}
