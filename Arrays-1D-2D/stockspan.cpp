#include <iostream>
#include <stack>
using namespace std;
void calculateSpan(int arr[],int span[],int n)
{
    stack<int> temp;
    temp.push(0);
    span[0]=1;
    for(int i=1;i<n;i++)
    {
      while(!temp.empty() && arr[temp.top()]<=arr[i])
      {
    	temp.pop();
      }
      span[i] = temp.empty() ? (i+1) : (i-temp.top());
      temp.push(i);
    }
    for(int i=0;i<n;i++)
    	cout<<span[i]<<" ";
    cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int span[n];
	calculateSpan(arr,span,n);
}