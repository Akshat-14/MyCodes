/*
Print all sum-k paths  https://www.geeksforgeeks.org/print-k-sum-paths-binary-tree/
*/

#include <iostream>
#include <queue>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
};
Node *create()
{
    int x;
    char ch;
    cin>>x;
    cin>>ch;
    if(x==-1 && ch=='n')
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
void sum(Node *root,int k,vector<int> &v)
{
   if(root==NULL)
   {
   	return;
   }
   v.push_back(root->data);
   sum(root->left,k,v);
   sum(root->right,k,v);
   int temp=0;
   int n = v.size();
   for(int i=n-1;i>=0;i--)
   {
   	temp+=v[i];
   	if(temp==k)
   	{
       for(int j=i;j<n;j++)
       {
       	 cout<<v[j]<<" ";
       }
   	   cout<<endl;
   	}
   }
   v.pop_back();
}
void inorder(Node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
   Node *root = NULL;
   vector<int> v;
  // v=NULL;
   root = create();
   int k;
   cout<<"k=";
   cin>>k;
   inorder(root);
   cout<<endl;	
   sum(root,k,v);
   return 0;
}
