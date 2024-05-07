/*      with "using" keyword        */

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

using namespace a::b;
int main()
{
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
}