#include <iostream>
#include <algorithm>
#define max 10000
using namespace std;
int tywin(int arr[],int n,int k)
{
  int i,c=0;
  int a,d;
  int sum=0;
  if(n%2==0)
  {
  	a=n/2;
  }
  else
  {
  	a=(n/2)+1;
  }
  for(i=0;i<n;i++)
  {
      if(arr[i]%k==0)
      {
         c++;
      }
  }  
  d=a-c;
  if(c<a)
  {
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
    	   {
    	   	 arr[i]=k-(arr[i]%k);
           }
        else
           {
        	 arr[i]=0;
           }
    }
    sort(arr, arr+n);
    
    for(i=0;i<a;i++)
       {
  	     sum+=arr[i];
       }
  } 
  return sum ;
}

int main()
{
    int a[max],b[max];
    int n,t,k,i,j,x;
    cin>>t;
    int temp=t;
    while(t>0)
    {
      cin>>n>>k;
      for(i=0;i<n;i++)
        {
             cin>>a[i];
        }
      b[x]=tywin(a,n,k);
      t--;
      x++;
    }
    for(j=0;j<temp;j++)
      {
      	cout<<b[j]<<endl;
      }
    return 0;
}
