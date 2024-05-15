#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char* argv[])
{
    if(argc!=4)
    {
        cout<<"Error: Usage - ./a.out filename targetCh replaceCh"<<endl;
        return 0;
    }
    char ch;
    fstream file;
    file.open(argv[1],ios::in|ios::out);
    if(file.is_open()==0)
    {
        cout<<"File not opened\n";
        return 0;
    }
    while( (ch=file.get())!=EOF )
    {
        if(ch==argv[2][0])
        {
            file.seekp(-1,ios::cur);
            file.put(argv[3][0]);
        }
    }
}