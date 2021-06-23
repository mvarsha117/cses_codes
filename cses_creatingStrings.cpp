#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*factorial(n-1);
}
int main()
{
    string str;
    cin>>str;
    map<int,int>m;
    for(auto i=str.begin();i!=str.end();i++)
    {
        int asc=((int)*i)-97;
        m[asc]++;
    }
    int fact=factorial(str.length());
    for(int i=0;i<m.size();i++)
    {
        if(m[i]>1)
            fact=fact/factorial(m[i]);
    }
    cout<<fact<<endl;
    sort(str.begin(),str.end());
    do
    {
        cout<<str<<endl;
    }
    while(next_permutation(str.begin(),str.end()));
    return 0;
}
