#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node *nextright;
};
void connectlevel(Node *root)
{
   queue <Node*> q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
   	   Node *temp=q.front();
       q.pop();
       if(temp!=NULL)
          {
     	     temp->nextright=q.front();
             if(temp->left)
               {
        	       q.push(temp->left);
        	   }
             if(temp->right)
               {
        	      q.push(temp->right);
               }
          }
       else if(!q.empty())
              {
     	         q.push(NULL);
              }
   } 
}
void inorder(Node *root)
{
	if(root==NULL)
		return;
	else
	{
	inorder(root->left);
	cout << root->data<<" ";
        inorder(root->right);
    }
}
Node *create()
{
    int x;
    cin>>x;
    if(x==-1)
    {   
       return NULL;
    }
    Node *temp = new Node;
    temp->data=x;
    cout <<"Enter left child for "<< x <<"(-1 for NULL):" ;
    temp->left=create();
    cout <<"Enter right child for "<< x <<"(-1 for NULL):";
    temp->right=create();
    return temp;
}
void compute(Node *root)
{
	if(root==NULL)
	{
		return;
	}	
	else
	{
	 printf("nextRight of %d is %d \n", root->data,root->nextright ? root->nextright->data : -1);
	 compute(root->left);
	 compute(root->right);
        }
}

int main()
{
Node *root =NULL;
cout<<"Enter root:";
root=create();
connectlevel(root);     
inorder(root);
cout<<endl;
compute(root);

return 0;
}
