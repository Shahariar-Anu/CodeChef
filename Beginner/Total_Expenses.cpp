#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>q>>p;
        if(q<=1000)
            cout<<fixed<<setprecision(6)<<q*p<<"\n";
        else
            cout<<fixed<<setprecision(6)<<q*p*0.9<<"\n";
    }
    return 0;
}
