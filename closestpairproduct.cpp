#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void bruteforce(int arr[],int n,int x)  //O(N^2)
{ 
	int y = INT_MAX;
	int pro;
	int low,high;
	for(int i=0;i<n;i++)
	{
		pro = 0;
		for(int j=i+1;j<n;j++)
		{
			pro = (arr[i])*(arr[j]);
			pro = abs(pro-x);
			if(y>=pro)
			{
				y = pro;
				low = arr[i];
				high = arr[j];
			}
		}
	}
	cout<<"-----Brute Force-----";
	cout<<low<<" "<<high<<endl;    
}
void optimized(int arr[],int n,int x)  //O(NlogN) because of sorting // O(N) for sorted //
{
	sort(arr,arr+n);
	int y = INT_MAX;
	int low,high;
	int l=0,r=n-1;
	while(r>l)
	{
		if(abs(arr[l]*arr[r]-x)<y)
		{
			low = l ;
			high = r;	
			y = arr[l]*arr[r]-x;
		}
	    if((arr[l]*arr[r])>x)
	    {	
	    	r--;
	    }
	    else
	    {
	    	l++;
	    }
	}
    cout<<"-----OPTIMIZED-------";
    cout<<arr[low]<<" "<<arr[high]<<endl;
}

int main()
{
  int n,x;
  cout<<"Enter Number:";
  cin>>n;
  int arr[100];
  cout<<"Enter x:";
  cin>>x;
  cout<<"Input Array:";
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
  bruteforce(arr,n,x);
  optimized(arr,n,x);
  return 0;
}
