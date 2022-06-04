//
// Created by pramin on 5/22/22.
//
// WAP to know the concept of namespace.

#include <iostream>
using namespace std;
namespace address1{
    string IP ="198.128.6.6";
    string location ="Kathmandu,Nepal";
}
namespace address2{
    string IP ="198.128.0.1";
    string location ="Pokhara,Nepal";
}
int main() {
    cout<<"/..................VPN..................../"<<endl;
    using namespace address1;
    cout<<"/Your current IP-address is "<<IP<<"   /"<<endl;
    cout<<"/Your current Location is "<<location<<" /"<<endl;
    cout<<"/.....Changing The Current Address......../ "<<endl;
    cout<<"/Your new IP-address is "<<address2::IP<<"       /"<<endl;
    cout<<"/Your new Location is "<<address2::location<<"       /"<<endl;
    cout<<"/........Thank you for using our VPN...../"<<endl;
    return 0;

}
