#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==7 || b==7 || c==7)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
