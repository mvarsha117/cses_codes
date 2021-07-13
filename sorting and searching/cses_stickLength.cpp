#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll cnt=0;
    for(ll i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
    ll mid;
    if(n%2==0)
    {
        mid=(n/2)-1;
    }
    else
    {
        mid=n/2;
    }
    for(ll i=0;i<n;i++)
    {
        cnt+=abs(a[mid]-a[i]);
    }
    cout<<cnt;
    return 0;
}
