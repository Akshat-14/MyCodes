/*  Ugly numbers are numbers whose only prime factors are 2, 3 or 5. 
    The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. 
    By convention, 1 is included. */
#include <bits/stdc++.h>
using namespace std;
int maxDivide(int a,int b)
{
  while(a%b==0)
  {
  	a=a/b;
  }
  return a;
}
int isUgly(int num)
{
	num = maxDivide(num,2);
	num = maxDivide(num,3);
	num = maxDivide(num,5);
	if(num==1)
		return 1;
	else
		return 0;
}
int nth_ugly(int n)
{
  int count = 1;
  int cur=1;
  while(count<n)
  {
    cur++;
    if(isUgly(cur))
      count++;
  }
  return cur;
}
int nth_ugly_dp(int n)
{
  int ugly[n];
  ugly[0]=1;
  int i2=0,i3=0,i5=0;
  int nmo2 = 2;
  int nmo3 = 3;
  int nmo5 = 5;
  int next_num=1;
  for(int i=1;i<n;i++)
  {
     next_num = min(nmo2,(min(nmo3,nmo5)));
     ugly[i] = next_num;
     if(next_num == nmo2)
     {
     	i2++;
     	nmo2 = ugly[i2]*2;
     }
     if(next_num == nmo3)
     {
     	i3++;
     	nmo3 = ugly[i3]*3;
     }
     if(next_num == nmo5)
     {
     	i5++;
     	nmo5 = ugly[i5]*5;
     }
   }
   return next_num;
}
int main()
{
	int n;
	cout<<"Enter limit:";
	cin>>n;
	int x = nth_ugly(n);
	cout<<x<<endl;
	cout<<nth_ugly_dp(n)<<endl;
    return 0;
}

