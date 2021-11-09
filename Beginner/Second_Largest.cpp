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
        if(a>=b && b>=c || a<=b && b<=c)
            cout<<b<<"\n";
        else if(a>=c && c>=b || a<=c && b>=c)
            cout<<c<<"\n";
        else
            cout<<a<<"\n";
    }
    return 0;
}
