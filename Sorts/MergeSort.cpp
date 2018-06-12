#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void merge(int a[],)
{

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
	vector <int> a;
	cout<<"Enter n:";
	cin>>n;
	cout<<"Enter array:";
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	mergesort(a,0,n-1);
}