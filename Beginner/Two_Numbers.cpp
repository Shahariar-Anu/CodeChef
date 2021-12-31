#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        if(n%2!=0)
            a=a<<1;
        cout<<max(a,b)/min(a,b)<<"\n";
    }
    return 0;
}
