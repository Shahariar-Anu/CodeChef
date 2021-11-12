#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==0)
            cout<<"Liquid\n";
        else if(b==0)
            cout<<"Solid\n";
        else
            cout<<"Solution\n";
    }
    return 0;
}
