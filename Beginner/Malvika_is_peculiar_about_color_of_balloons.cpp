#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a,b;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        a=0;b=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
                a++;
            else if(s[i]=='b')
                b++;
        }
        if(a>b)
            cout<<b<<"\n";
        else
            cout<<a<<"\n";
    }
    return 0;
}

