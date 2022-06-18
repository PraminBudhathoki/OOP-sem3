//
//
// Created by pramin on 6/17/22.
//
//
// WAP using operator overloading for prefix increment(++) operator by not returning the value through the object.
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
        void operator ++(){
            ++count;
        }
};
int main(){
    counter c1;
    cout<<"\n C1="<<c1.getCount();
    ++c1;
    ++c1;
    ++c1;
    cout<<"\n After prefix";
    cout<<"\n C1="<<c1.getCount();
    return 0;
}


