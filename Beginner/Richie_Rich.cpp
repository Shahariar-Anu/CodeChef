#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x;
        cout<<(int)(b-a)/x<<"\n";
    }
    return 0;
}
