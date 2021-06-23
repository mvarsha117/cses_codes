#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    string str;
    cin>>str;
    ll len=str.length();
    int e=0,f=1,start=0,last=len-1;
    if(len%2==0)
        e=1;
    char st[len];
    map<ll,ll>m;
    for(auto i=str.begin();i!=str.end();i++)
    {
        int asc=((int)*i)-65;
        m[asc]++;
    }
    for(int i=0;i<26;i++)
    {
        if(e==1 && m[i]%2!=0)
        {
            f=0;
            break;
        }
        else if(e==0 && m[i]%2!=0 && st[len/2]=='\0')
        {
            st[len/2]=(char)(i+65);
            m[i]--;
        }
        else if(e==0 && m[i]%2!=0 && st[len/2]!='\0')
        {
            f=0;
            break;
        }
        int c=1;
            while(c<=m[i]/2)
            {
                st[start++]=(char)(i+65);
                st[last--]=(char)(i+65);
                c++;
            }
    }
    if(f==1)
        {
            for(int i=0;i<len;i++)
                cout<<st[i];
        }
    else
        cout<<"NO SOLUTION";
    return 0;
}
