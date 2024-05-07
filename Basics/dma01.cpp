/*      2d array using DMA      */

#include<iostream>
using namespace std;

int main()
{
    int row, col, i, j;
    cout<<"Enter the value for rows and columns"<<endl;
    cin>>row>>col;

    cout<<'x'<<endl;

    int **p = new int*[row];
    for(i=0;i<row;i++)
        p[i] = new int[col];

    cout<<"Enter the values"<<endl;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin>>p[i][j];

    cout<<"the values are:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            cout<<p[i][j]<<' ';
        cout<<endl;
    }
}