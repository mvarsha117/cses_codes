#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll a[n],maxm=0;
    map<ll,ll>count;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll chkd_seq=0,i=0,chkd_cnt=0;
    while(i<n)
    {
        if(count[a[i]]==0)
        {
            count[a[i]]++;
            chkd_cnt++;
            maxm=max(chkd_cnt,maxm);
            i++;
        }
        else
        {
            count[a[chkd_seq]]--;
            chkd_cnt--;
            chkd_seq++;
        }
    }
    cout<<maxm;
    return 0;
}
