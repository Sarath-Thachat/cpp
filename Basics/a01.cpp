/*      Access global data in local scope using scope resolution operator.      */

#include<iostream>
using namespace std;

int x = 10;

int main()
{
    int x = 20;
    cout<<x<<endl;
    cout<<::x<<endl;
    {
        int x = 30;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    cout<<x<<endl;
}