#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int brute(char a[50][50],char b[50],int r,int c)
{
  int count=0;
  int len;
  len=strlen(b);// c =column of matrix is length of word here
  int i,j,k;
  for(k=0;k<r;k++)
  {
  	for(i=0;i<=c-len;i++)
       {
  	      for(j=0;j<len;j++)
         	{
  		      if(b[j]!=a[k][i+j])
  		        {
  			      break;
  		        }
  	        }
        if(j==len)
          {
    	    count++;
          }
       }
  }
  return count;
}

int main()
{
  char grid[50][50];
  char str[50];
  cout<<"Enter pattern:";
  gets(str);
  int m,n,x;
  cout<<"Enter row and column of the matrix respectively:";
  cin>>m>>n;
  cout<<"Enter the matrix:";
  int i,j;
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		cin>>grid[i][j];
  	}
  }
  cout<<"Entered Matrix:"<<endl;
  for(i=0;i<m;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		cout<<grid[i][j]<<" ";
  	}
  	cout<<endl;
  }
  cout<<"Entered pattern:";
  puts(str);
  x=brute(grid,str,m,n);
  cout<<"Number of occurences of pattern:"<<x<<endl;
  return 0;
}