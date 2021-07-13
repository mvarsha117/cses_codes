#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    set<long long int>a;
    //long long int arr[n],i,max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        long long int x;
         cin>>x;
         a.insert(x);
         /*if(arr[i]>max)
            max=arr[i];*/
        /* if(find(a.begin(),a.end(),arr[i])==a.end())
            a.push_back(arr[i]);*/
    }
   // long long int b[max+1]={0};
   /* for(auto i=a.begin();i!=a.end();i++)
    {
        cout<< *i;
        /*if(b[arr[i]]==0)
            b[arr[i]]=1;*/
    //}
    cout<<a.size();//count(b+1,b+max+1,1);
    return 0;
}
