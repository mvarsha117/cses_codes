#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inp(a,n) for(int i=0;i<n;i++){cin>>a[i];}
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n];
    inp(a,n);
    sort(a,a+n);
    ll cnt=0;
    ll l=0,r=n-1;
    while(l<=r)
    {
        if(a[l]+a[r]<=x)
        {
            cnt++;
            l++;
            r--;
        }
        else
        {
            r--;
            cnt++;
        }
    }
   /* for(ll i=n-1;i>=0;i--)
    {
        /*if(a[i]==x)
            cnt++;*/
      /*  if(i!=0 && a[i]<x && a[i]+a[i-1]<=x)
        {
            //cnt++;
            i--;
        }
        cnt++;
    }*/
    cout<<cnt;
    return 0;
}
