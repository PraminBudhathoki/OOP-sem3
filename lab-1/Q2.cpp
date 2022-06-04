//
// Created by pramin on 5/21/22.
//
// WAP to check whether the given number is prime or not
#include <iostream>,
using namespace std;
int main() {
    int num,isPrime=0,i;
    cout<<"Enter the number: ";
    cin>>num;
    for ( i = 1; i <= num; i++) {
        if (num % i == 0){
            isPrime++;
        }
    }
    if (isPrime<=2){
        cout<<"The number is prime";
    } else{
        cout<<"The number is not prime";
    }
    return 0;
}

//An advanced solution to use in future
//#include <iostream>
//#include <cmath>
//using  namespace  std;
//int main(){
//    int n,i;
//    cout<<"Enter the number: ";
//    cin>>n;
//    for(i=2;i<=sqrt(n);i++){
//        if (n % i ==0)
//            break;
//    }
//    if(i> sqrt(n)){
//        cout<<"The number is  prime";
//    } else{
//        cout<<"The number is not prime";
//    }
//    return 0;
//}
