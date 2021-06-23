#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<pow(2,n);i++)
    {
        int a[n]={0};
        int j=0;
        int x=i;
        while(x>0)
        {
            a[j]=x%2;
            x=x/2;
            j++;
        }
        cout<<a[n-1];
        for(int k=n-2;k>=0;k--)
        {
            if(a[k]==1 && a[k+1]==1)
                cout<<0;
            else
            cout<<a[k]+a[k+1];
        }
        cout<<endl;
    }
    return 0;
}
