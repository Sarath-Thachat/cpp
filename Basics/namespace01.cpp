/*      By scope resolution operator        */

#include<iostream>
using namespace std;

namespace a
{
    int x = 10;
    int y = 20;

    namespace b
    {
        int x = 30;
        int y = 40;
    }        
}

namespace c
{
    int x = 50;
    int y = 60;
} 

int main()
{
    cout<<"a::x = "<<a::x<<endl;
    cout<<"a::y = "<<a::y<<endl;
    cout<<"a::b::x = "<<a::b::x<<endl;
    cout<<"a::b::y = "<<a::b::y<<endl;
    cout<<"c::x = "<<c::x<<endl;
    cout<<"c::y = "<<c::y<<endl;
}