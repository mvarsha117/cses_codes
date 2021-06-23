#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll c=0;
    for(ll i=1;i<n;i++)
    {
       if(a[i]<a[i-1])
       {
           c=c+(a[i-1]-a[i]);
           a[i]=a[i-1];
       }
    }
    cout<<c;
    return 0;
}
