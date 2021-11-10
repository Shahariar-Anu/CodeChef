#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,a,k,count=0;
    cin>>t>>k;
    while(t--)
    {
        cin>>a;
        if(a%k==0)
            count++;
    }
    cout<<count;
    return 0;
}

