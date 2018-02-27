/*
Type - Brute Force
Worst and Average time complexity : O(n^2) // Worst when array is descending
Best case : O(n) // when array is already sorted
Stable : Yes

#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}

void bubblesort(int arr[],int n)
{
  int i,j,opcount=0;
  for(i=0;i<n-1;i++)
  {
      for(j=0;j<n-1-i;j++)
  	  {
  	     opcount++;
  	     if(arr[j]>arr[j+1])
  		{
  	           swap(&arr[j],&arr[j+1]);
  		}
          }
   }
   printf("Sorted Array after bubblesort:\n");
   for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
  printf("\n");
  printf("Opcount of bubble sort:%d\n",opcount);
}

int main()
{
    int a[100],n,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    return 0;
}
