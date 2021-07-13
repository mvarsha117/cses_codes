#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    cin>>n>>x;
    long long int a[n],b[n];
    for(long long int i=0;i<n;i++)
        cin>>a[i];
    if(x==1)
        cout<<"IMPOSSIBLE";
    else{
        copy(a,a+n,b);
        sort(b,b+n);
        int z;long long int y,p;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>=x)
                continue;
            y=x-a[i];
            int l=0,r=n-1;z=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(b[mid]==y && b[mid]!=a[i])
                {
                    z=1;
                    break;
                }
                else if(b[mid]==y && b[mid]==a[i] && (b[mid-1]==a[i] || b[mid+1]==a[i]))
                {
                    z=1; break;
                }
                else if(b[mid]<y)
                l=mid+1;
                else
                    r=mid-1;
            }
            if(z==1)
            {
                p=i;
                cout<<i+1<<" ";
                break;
            }
        }
        if(z==1)
        {
            for(int i=p+1;i<n;i++)
            {
                if(a[i]==y)
                {
                    cout<<i+1;
                    break;
                }
                else
                {
                    long long int s=(rand()%(n-(i+1)))+(i+1);
                    if(a[s]==y)
                    {
                        cout<<s+1;
                        break;
                    }
                }
            }
        }
        else
            cout<<"IMPOSSIBLE";
    }
    return 0;
}
