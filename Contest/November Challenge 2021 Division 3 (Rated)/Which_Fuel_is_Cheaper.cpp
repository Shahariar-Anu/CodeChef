#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n,x,y,a,b,k,p1,p2;
    cin>>n;
    while(n--)
    {
        cin>>x>>y>>a>>b>>k;
        p1=(x+a)+a*(k-1);
        p2=(y+b)+b*(k-1);
        if(p1==p2)
            cout<<"SAME PRICE\n";
        else if(p1<p2)
            cout<<"PETROL\n";
        else if(p1>p2)
            cout<<"DIESEL\n";
    }
    return 0;
}
