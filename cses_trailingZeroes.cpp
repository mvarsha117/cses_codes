#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
    for(int i=5;n/i>=1;i*=5)
        c+=n/i;
    cout<<c;
    return 0;
}
