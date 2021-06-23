#include<bits/stdc++.h>
using namespace std;
void toh(int start,int aux,int en,int n,vector<vector<int>>&d)
{
    vector<int>t;
    if(n==1)
    {
        //vector<int>t;
        t.push_back(start);
        t.push_back(en);
        d.push_back(t);
        return;
    }
    toh(start,en,aux,n-1,d);
    //vector<int>t;
        t.push_back(start);
        t.push_back(en);
        d.push_back(t);
    toh(aux,start,en,n-1,d);
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>d;
    toh(1,2,3,n,d);
   // cout<<d.size()<<endl;
   int a=(1<<n)-1;// this is other way to find count. If we use this way then we can use normal toh function n print the swaps there itself
   cout<<a<<endl;
    for(int i=0;i<d.size();i++)
        cout<<d[i][0]<<" "<<d[i][1]<<endl;
    return 0;
}
