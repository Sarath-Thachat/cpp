/*      Reference variables        */

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    // int &k;                                  //invalid - must be initialized
    int &k = a;
    cout<<"a = "<<a<<" k = "<<k<<endl;          //same value
    cout<<"&a = "<<&a<<" &k = "<<&k<<endl;      //same address
    k = 100;
    cout<<"a = "<<a<<" k = "<<k<<endl;          //same value

    // int &k = b;                              // invalid - same reference variable cannot be used for another variable.
    // int &y = 10;                             // invalid - cannot be initialized to constant or NULL.
    const int &y = 100;                         // valid   - both are constants
    cout<<"y = "<<y<<endl;
}