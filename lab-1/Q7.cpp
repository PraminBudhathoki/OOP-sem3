//
// Created by pramin on 5/22/22.
//
//WAP to calculate the average of different number entered by user using the concept of DMA.
#include <iostream>
using namespace std;
int main(){
    int *arr,i,n,total=0;
    float avg;
    cout<<" how many numbers as input??";
    cin>>n;
    arr = new int [n];
    for (int i = 0; i <n; i++) {
        cout<<"Enter the "<<i+1<<" number:-" ;
        cin>>arr[i];
        total+=arr[i];
    }
    avg=float(total)/n;             //c++ type conversion
    cout<<"The average is= "<<avg;
    delete arr;
    return 0;
}
