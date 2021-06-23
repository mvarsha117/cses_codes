#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n+1]={0};
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=1;
    }
    for(int i=1;i<=n;i++)
    {
        if(b[i]==0)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
