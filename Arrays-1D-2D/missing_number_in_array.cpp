#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	int sum=0;
	int s;
	cin>>t;
	while(t>0)
	{
	    sum=0;
	    s=0;
	    cin>>n;
	    int temp[n];
	    for(int i=0;i<n-1;i++)
	    {
	        cin>>temp[i];
	    }
	    s = (n*(n+1))/2;
	    for(int j=0;j<n-1;j++)
	    {
	        sum+=temp[j];
	    }
	    s = s - sum;
	    cout<<s<<endl;
	    t--;
	}

	return 0;
}
