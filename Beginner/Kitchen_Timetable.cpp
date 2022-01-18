#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1],b[n+1];

        for(int i=1; i<=n; i++)
            cin>>a[i];

        for(int i=1; i<=n; i++)
            cin>>b[i];

        int count=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]-a[i-1]>=b[i])
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
