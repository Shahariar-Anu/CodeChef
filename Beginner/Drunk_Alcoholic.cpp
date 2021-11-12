#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<(a/2)*2+(a%2)*3<<"\n";
    }
    return 0;
}
