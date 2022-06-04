//Q1
// WAP to check whether the given number is odd or even
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if (num % 2 ==0){
        cout<<"The number is even";
    } else{
        cout<<"The number is odd";
    }
    return 0;
}
