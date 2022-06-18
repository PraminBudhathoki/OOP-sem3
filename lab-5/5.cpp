//
//
// Created by pramin on 6/17/22.
//
//
// WAP to overload ++ operator for distance class, where feet is the private data member.It should add1 to  the feet data
// member make possible statements like: dist2=dist++;
//
//
#include <iostream>
using namespace std;
class distance{
    private:
        unsigned int feet;
    public:
        distance(){}
        distance(int x){
            feet=x;
        }
        int getFeet(){return feet;}
        distance operator ++(int){
            distance temp;
            temp.feet+=1;
            return temp;
        }
};
int main(){
    distance dist1,dist2;
    cout<<"\n dist1="<<dist1.getFeet();
    dist2 = dist1++;
    cout<<"\n dist2="<<dist2.getFeet();
    return 0;
}


