#include<iostream>
#include<climits>
using namespace std;
 
void maxSubArraySum(int a[], int size)
{
    int maxsofar = INT_MIN, maxendinghere = 0,
       start =0, end = 0, s=0;
 
    for (int i=0; i< size; i++ )
    {
        maxendinghere += a[i];
 
        if (maxsofar < maxendinghere)
        {
            maxsofar = maxendinghere;
            start = s;
            end = i;
        }
 
        if (maxendinghere < 0)
        {
            maxendinghere = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is "<< maxsofar << endl;
    cout << "Starting index "<< start<< endl << "Ending index "<< end << endl;
    for(int i=start;i<=end;i++)
        cout<<a[i]<<" ";
}
 
/*Driver program to test maxSubArraySum*/
int main()
{
    int n,a[100] ;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    maxSubArraySum(a, n);
    return 0;
}