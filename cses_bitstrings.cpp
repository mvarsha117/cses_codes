#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,y=2,c=1;
    cin>>n;
         while(c<n)
         {
             y*=2;
             y=y%1000000007;
             c++;
         }
         cout<<y;

    return 0;
}
