#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int one=0, zero=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                one++;
            if(s[i]=='0')
                zero++;
        }
        if(min(one,zero)==1 || s.size()==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
