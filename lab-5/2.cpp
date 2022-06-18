//
//
// Created by pramin on 6/17/22.
//
//
// WAP using operator overloading for postfix increment(++) operator by returning the value through the object.
//
//
#include <iostream>
using namespace std;
class counter{
    private:
        unsigned int count;
    public:
        counter():count(0){};
        int getCount(){return count;}
        counter operator ++(int){
            counter temp;
            temp.count=count++;
            return temp;
        }
};
int main(){
    counter c1,c2;
    cout<<"\n C1="<<c1.getCount();
    c2 = c1++;
    cout<<"\n C2="<<c2.getCount();
    cout<<"\n C1="<<c1.getCount();
    return 0;
}


