#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int max=a[0],maxEndsHere;
    if(a[0]<0)
       {
           maxEndsHere=0;
       }
    else
    {
        maxEndsHere=a[0];
    }
    for(long long int i=1;i<n;i++)
    {
        maxEndsHere+=a[i];
        if(maxEndsHere>max)
            max=maxEndsHere;
        if(maxEndsHere<0)
            maxEndsHere=0;
    }
    cout<<max;
    return 0;
}
