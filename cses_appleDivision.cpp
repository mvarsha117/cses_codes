#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<a[0];
    }
    else
    {
        sort(a,a+n);
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
        long long int x=0,y=0;
        for(int j=n-1;j>=0;j--)
        {
            if(x<=y)
                x+=a[j];
            else
                y+=a[j];
        }
        cout<<abs(x-y);
    }
    return 0;
}
