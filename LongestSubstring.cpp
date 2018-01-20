#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  char str[100];
  cout<<"Input String:";           
  gets(str);
  cout<<"Entered String:";
  puts(str);
  int len=strlen(str);
  cout<<"Length of string:"<<len<<endl;
  int curr=1;
  int max=1;
  int pindex,i;
  int *visited = new int[256];
  for(i=0;i<256;i++)
  {
  	visited[i]=-1;
  }
  visited[str[0]]=0;
  for(i=1;i<len;i++)
  {
  	pindex=visited[str[i]];
  	if(pindex == -1 || i-curr>pindex)
  	{
  		curr++;
  	}
  	else
  	{
  		if(curr>max)
  		{
  			max=curr;
  		}
  		curr=i-pindex;
  	}
  	visited[str[i]]=i;
  }
  if(curr>max)
  {
  	max=curr;
  }
  delete(visited);
  cout<<"Length of longest non-repeating substring:"<<max<<endl;
  return 0;   
}