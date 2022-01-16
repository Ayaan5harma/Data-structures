#include<iostream>
using namespace std;
#define n 100
class stack
{
	private:
	char *arr;
	int top;
	public:
	stack()
		{
		
	arr=new char[n];
	top=-1;
}
	void push(char x)
	{
		if(top==n-1)
		{
			cout<<"stack is full no character can be added"<<endl;
		}
		else
		{
			top++;
			arr[top]=x;	
	    }
}
	void pop()
	{
		if(top==-1)
		{
			cout<<"stack is already empty"<<endl;
		}
		else
		{
			top--;
		}
	}
	int Top()
	{
		if(top==-1)
		{
		cout<<"stack is already empty"<<endl;
		}
		else
		{
		cout<<arr[top]<<endl;
		}
	
	}
	bool empty()
	{
	return top==-1;
		
	
		
	}
     void reverse()
     {
         
         char n1=arr[top];
         pop();
         cout<<n1;
     }
	
	};
int main()
{
		stack st;
		st.push('a');
		st.push('y');
		st.push('a');
        st.push('n');
        while(!st.empty())
        {
            st.reverse();
        }
	
}