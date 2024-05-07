/*      reference to pointers        */

#include<iostream>
using namespace std;

int main()
{
    int a[] ={10,20,30,40};
    int* p  = a;
    int* &q = p;
    for(int i=0 ; i<4 ; i++)
        cout<<"q["<<i<<"] = "<<q[i]<<endl;
}