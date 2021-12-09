#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x1,x2,y1,y2,z1,z2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>x2>>y1>>y2>>z1>>z2;
        if(x1<=x2 && y1<=y2 && z1>=z2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
