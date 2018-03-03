#include<bits/stdc++.h>
using namespace std;
class Stack
{
queue <int> q1,q2;
int length,tpop;
public:
Stack()
  {
       length=0;
  }
  void push(int n)
  {
  	length++;
  	q1.push(n);
  	while(!q2.empty())
  	{
  		q1.push(q2.front());
  		q2.pop();
  	}
    queue <int> temp = q2;
    q2=q1;
    q1=temp;
    cout<<n<<" pushed to stack"<<endl;
  }
  void pop()
  {
    if(length==0)
    {
    	return;
  	}
  	tpop=q2.front();
  	q2.pop();
  	cout<<tpop<<" popped from stack"<<endl;
  	length--;
  }
  int top()
  {
  	if(length==0)
    {
  		return -1;
  	}
  	return q2.front();
  }
  int los()
  {
  	return length;
  }
};
int main()
{
	Stack s;
	int option,num,x;
	char ch='y';
	while(ch=='y')
	{
        cout<<"1.Push into Stack\n";
        cout<<"2.Pop from Stack \n";
        cout<<"3.Display top of stack\n";
        cout<<"4.Display number of elements in stack\n";
        cout<<"Enter Option:";
        cin>>option;
        switch(option)
        {
        	case 1: cout<<"Enter element:";
        	        cin>>num;
        	        s.push(num);
        	        break;
        	case 2: s.pop();
        	        break;
        	case 3: x = s.top();
        	        cout<<"Top:"<<x<<endl;
        	        break;
        	case 4: cout<<"Stack Length:"<<s.los()<<endl;
        	        break;
        }
	    cout<<"Continue?:";
	    cin>>ch;
	}
    return 0;
}