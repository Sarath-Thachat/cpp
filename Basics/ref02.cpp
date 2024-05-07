/*      reference to array      */

#include<iostream>
using namespace std;

int main()
{
    int a[5] = {10,20,30,40};
    int (&b)[] = a;
    for(int i =0; i<4 ; i++)
        cout<<"b["<<i<<"] = "<<b[i]<<endl;
}