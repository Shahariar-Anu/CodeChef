#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n,n1,n2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n1=n;
        n2=0;
        while(n!=0)
        {
            n2=n2*10 + n%10;
            n=n/10;
        }
        if(n1==n2)
            cout<<"wins\n";
        else
            cout<<"loses\n";
    }
    return 0;
}
