#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==0)
        {
            if(y%2==0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(x%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
