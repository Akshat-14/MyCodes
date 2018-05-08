#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};

/*Node *newnode(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}*/
Node *insert(Node *p,int x)
{
	Node *temp = new Node;
	temp->data = x;
	temp->next = NULL;
	if(p==NULL)
	{
	    return temp;
	} 
        Node *curr = p;
        while(curr->next!=NULL)   //traverse to end
        {
    	    curr=curr->next;
        }
        curr->next = temp;
        return p;
}

void print(Node* p)
{
	if(p==NULL)
		return;
	cout << p->data << "->";
	print(p->next); 
}
Node* reverse(Node *head)
{
   Node *curr = head;
   Node *prev = NULL;
   Node *next;
   while(curr!=NULL)
   {
   	  next = curr->next;
   	  curr->next = prev;
   	  prev = curr;
   	  curr = next;
   }
   head=prev;
   return head;
}
Node* addNum(Node *p,Node *q)
{
	int carry,sum;
	carry=0;
	Node * result = NULL;
	Node * curr1 = p;
	Node * curr2 = q; 
        while(curr1!=NULL && curr2!=NULL)
        {
           sum = 0;
           sum = carry + curr1->data + curr2->data;
           carry = sum/10;
           sum = sum%10;
           result=insert(result,sum);
           curr1=curr1->next;
           curr2=curr2->next;
        }
        sum = 0;
        if(curr1==NULL)
        {
     	   sum = carry + curr2->data;
     	   result = insert(result,sum);
           curr2=curr2->next;
           while(curr2!=NULL)
             {
        	result = insert(result,curr2->data);
        	curr2=curr2->next;
             }
        }
        else if(curr2==NULL)
        {
        sum = carry + curr1->data;
        result = insert(result,sum);
        curr1 = curr1->next;
        while(curr1!=NULL)
           {
        	result = insert(result,curr1->data);
        	curr1=curr1->next;
           }    
        }
    result = reverse(result);
    return result;
}
int main()
{
    int a,temp,b;
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;
    cout <<"Enter a:" << endl;
    cin>>a;
    cout <<"Enter b:" << endl;
    cin>>b;
    while(a!=0)
    {
        temp=a%10;
    	head1=insert(head1,temp);
    	a=a/10;
    }
    while(b!=0)
    {
        temp=b%10;
    	head2=insert(head2,temp);
    	b=b/10;
    }
    head3 = addNum(head1,head2); 
    head1=reverse(head1);
    print(head1);
    cout<<endl;
    head2=reverse(head2);
    print(head2);
    cout<<endl;
    print(head3);
    return 0;
}
