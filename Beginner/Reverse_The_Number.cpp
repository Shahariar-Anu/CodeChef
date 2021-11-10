#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int rem,reverse=0;
        while(n!=0)
        {
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
        }
        cout<<reverse<<"\n";
    }
    return 0;
}


