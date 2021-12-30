#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        long long int sum=a+b;
        stringstream ss;
        ss<<sum;
        string s=ss.str();
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0' || s[i]=='6' || s[i]=='9')
                ans+=6;
            else if(s[i]=='1')
                ans+=2;
            else if(s[i]=='2' || s[i]=='3' || s[i]=='5')
                ans+=5;
            else if(s[i]=='4')
                ans+=4;
            else if(s[i]=='7')
                ans+=3;
            else if(s[i]=='8')
                ans+=7;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
