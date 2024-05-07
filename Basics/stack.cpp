#include<iostream>
using namespace std;

class stack
{
    private: int stk[5], top=0;
    public: void push()
            {
                if(top==5)
                {
                    cout<<"Stack is overflow\n";
                    return;
                }
                cout<<"Enter element\n";
                cin>>stk[top];
                cout<<stk[top++]<<" is enqued\n";
            }
            void pop()
            {
                if(top == 0) 
                {
	                cout<<"Stack is Underflow\n";
	                return;
            	}
            	cout<<stk[top-1]<<" is dequeued\n";
	            stk[--top] = 0;
            }
            void Display()
            {
                int i;
                for(i=0;i<top-1;i++)
                cout<<stk[i]<<"-->";
                cout<<stk[i]<<endl;
            }
};

int main()
{
    stack s1;
    int op;
	while(1)
    {
    	cout<<"Enter the option 1)Push 2)Pop 3)Display 4)Exit\n";
	    cin>>op;
	
	    switch(op) 
        {
            case 1: s1.push(); break;
            case 2: s1.pop(); break;
            case 3: s1.Display(); break;
            case 4: cout<<"Stack Operation is stopped\n"; 
                    return 0;
            default: cout<<"Invalid Option\n";
        }
	}
}