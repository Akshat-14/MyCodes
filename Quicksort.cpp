#include<iostream>
#include<algorithm>
using namespace std;

int partition(int a[],int start,int end)
{
	int temp;
	int pivot = a[end];
	int pIndex=start;
	int i;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
		   swap(a[i],a[pIndex]);
           pIndex++;
		}
	}
    swap(a[pIndex],a[end]);
    return pIndex;
}
void quicksort(int a[],int start,int end)
{
	int pin;
	if(start<end)
	{
		pin=partition(a,start,end);
		quicksort(a,start,pin-1);
		quicksort(a,pin+1,end);
	}
}


int main()
{
   int n,a[50];
   int i;
   cout<<"Enter the size of array:";
   cin>>n;
   cout<<"Input the array:";
   for(i=0;i<n;i++)
   {
   	   cin>>a[i];
   } 
   quicksort(a,0,n-1);
   cout<<"Sorted Array:";
   for(i=0;i<n;i++)
   {
   	 cout<<a[i]<<" ";
   }

   return 0;
}
