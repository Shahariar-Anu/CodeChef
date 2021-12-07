#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,d,n;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>d>>n;
        while(d--)
        {
            sum=0;
            for(int i=1;  i<=n; i++)
                sum+=i;
            n=sum;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
