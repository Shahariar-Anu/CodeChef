#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int fact=1;
        for(int i=1; i<=a; i++)
            fact*=i;
        cout<<fact<<"\n";
    }
    return 0;
}
