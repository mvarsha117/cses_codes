#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    int a[n+1]={0};
    long long int sum=(n*(n+1))/2;
    if(sum%2==0)
    {
        long long int req=(sum/2)-n,f=1;
        a[n]=1;
        long long int left=n-1;
        long long int count=n;
        while(count!=(sum/2))
        {
            if(req>=left)
            {
                req-=left;
                a[left]=1;
                count+=left;
                left--;
            }
            else
            {
                a[req]=1;
                count+=req;
            }
            f++;
        }
        cout<<"YES"<<endl;
        cout<<f<<endl;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==1)
                cout<<i<<" ";
        }
        cout<<endl;
        cout<<(n-f)<<endl;
        for(int i=1;i<=n;i++)
        {
            if(a[i]==0)
                cout<<i<<" ";
        }
    }
    else
        cout<<"NO";
    return 0;
}
