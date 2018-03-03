#include<bits/stdc++.h>
using namespace std;
class Queue
{
stack <int> s1,s2;
int length,spop;
public:
Queue()
  {
       length=0;
  }
  void push(int n)
  {
  	length++;
  	//s2.push(n);
  	while(!s1.empty())
  	{
  		s2.push(s1.top());
  		s1.pop();
  	}
    s1.push(n);
    while(!s2.empty())
    {
      s1.push(s2.top());
      s2.pop();
    }
    /*stack <int> temp = s1;
    s1=s2;
    s2=temp;*/
    cout<<n<<" pushed to queue"<<endl;
  }
  void pop()
  {
    if(length==0)
    {
    	return;
  	}
  	spop=s1.top();
  	s1.pop();
  	cout<<spop<<" popped from Queue"<<endl;
  	length--;
  }
  int top()
  {
  	if(length==0)
    {
  		return -1;
  	}
  	return s1.top();
  }
  int loq()
  {
  	return length;
  }
};
int main()
{
	Queue q;
	int option,num,x;
	char ch='y';
	while(ch=='y')
	{
        cout<<"1.Push into Queue\n";
        cout<<"2.Pop from Queue \n";
        cout<<"3.Display front of Queue\n";
        cout<<"4.Display number of elements in Queue\n";
        cout<<"Enter Option:";
        cin>>option;
        switch(option)
        {
        	case 1: cout<<"Enter element:";
        	        cin>>num;
        	        q.push(num);
        	        break;
        	case 2: q.pop();
        	        break;
        	case 3: x = q.top();
        	        cout<<"Front:"<<x<<endl;
        	        break;
        	case 4: cout<<"Stack Length:"<<q.loq()<<endl;
        	        break;
        }
	    cout<<"Continue:";
	    cin>>ch;
	}
    return 0;
}