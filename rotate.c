
#include<stdio.h>

void leftrotate(int arr[],int d,int n)
{ 
   int b[50];
   int temp,i;
   for(i=n-1;i>=0;i--)
   {
   	 temp=arr[i];
   	 if(i>=d)
   	 {
   	 	b[i-d]=temp;
   	 }
   	 else
   	 {
   	 	b[n-d+i]=temp;
   	 }
   }
   for(i=0;i<n;i++)
   {
   	arr[i]=b[i];
   }
}

int main()
{
	int n,d;
        int a[50];
	printf("Enter the size of array:");
	scanf("%d",&n);
        int i;
	printf("Enter the rotation number:");
	scanf("%d",&d);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
          scanf("%d",&a[i]);
	}
        leftrotate(a,d,n);    
        printf("Rotated Array:\n");
        for(i=0;i<n;i++)
	{
          printf("%d ",a[i]);
	}
	printf("\n");
    return 0;

}
