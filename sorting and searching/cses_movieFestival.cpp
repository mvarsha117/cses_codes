#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    vector<vector<ll>>a;
    for(int i=0;i<n;i++)
    {
        vector<ll>b;
        ll x,y;
        cin>>x>>y;
        b.push_back(y);
        b.push_back(x);
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    ll cnt=1,w=a[0][0];
    for(int i=1;i<n;i++)
    {
        if(a[i][1]>=w)
        {
            cnt++;
            w=a[i][0];
        }
        //cout<<a[i][0]<<" "<<a[i][1]<<endl;
    }
    cout<<cnt;
    return 0;
}
