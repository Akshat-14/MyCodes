
//Count pairs from two sorted matrices with given sum

//Given two sorted matrices mat1 and mat2 of size n x n of distinct elements.
//Given a value x. The problem is to count all pairs from both matrices whose sum is equal to x.
// Hashing----> O(N^2)
// Implemented for unsorted  //


#include <bits/stdc++.h>
using namespace std;
int countPairs(int a[][10],int b[][10],int sum,int r1,int c1,int r2,int c2)
{
    int count = 0;
    unordered_set<int> temp;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            temp.insert(b[i][j]);
        }
    }
   // int temp.end()
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            if(temp.find(sum-a[i][j])!=temp.end())
               count++;
        }
    }    
    return count;
}
int main() 
{
	int r1,c1,r2,c2,sum;
	cout<<"Enter sum:";
	cin>>sum;
	cout<<"Dimensions of matrix 1:";
	cin>>r1>>c1;
	cout<<"Dimensions of matrix 2:";
	cin>>r2>>c2;
	int a[10][10],b[10][10];
	for(int i=0;i<r1;i++)
	{
	    for(int j=0;j<c1;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	for(int i=0;i<r2;i++)
	{
	    for(int j=0;j<c2;j++)
	    {
	        cin>>b[i][j];
	    }
	}	
	int ans = countPairs(a,b,sum,r1,c1,r2,c2);
	cout<<ans<<endl;
	return 0;
}
