#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,m,count=0,digit;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cout<<((n+1)/2)*((m+1)/2)<<"\n";
    }
    return 0;
}
