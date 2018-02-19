#include <iostream>
using namespace std;
int sisgets(int a[],int n)
{
   int i;
   int min=999;
   for(i=0;i<n;i++)
   {
      if(min>a[i])
      {
      	min=a[i];
      }
   }
   return min;
}
int main()
{
	int n,t,i,j;
	int x=0;
	int a[1000];
	int b[1000];
	cin>>t;
	int temp;
	temp=t;
	while(t>0)
      {
         cin>>n;
         for(i=0;i<n;i++)
         {
             cin>>a[i];
         }
         b[x]=sisgets(a,n);
         t--;
         x++;
      }	
      for(j=0;j<temp;j++)
      {
      	cout<<b[j]<<endl;
      }
      return 0;
}
