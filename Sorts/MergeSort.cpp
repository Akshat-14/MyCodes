//Merge Sort ---- O(NlogN)
//Stable SORt ---- YES
#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(int a[],int l,int r)
{
  if(l<r)
  {
  	int m = (l + (r-l))/2;
  	mergesort(a,l,m);
  	mergesort(a,m+1,r);
  	merge(a,l,m,r);
  }
}
int main()
{
	int n;
	int a[100];
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter array:";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
}
