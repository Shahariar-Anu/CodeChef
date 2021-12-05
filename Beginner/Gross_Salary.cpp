#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s<1500)
            cout<<fixed<<setprecision(2)<<s*2<<"\n";
        else if(s>=1500)
            cout<<fixed<<setprecision(2)<<(s+500+(s*0.98))<<"\n";
    }
    return 0;
}
