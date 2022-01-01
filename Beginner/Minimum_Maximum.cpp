#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int arr[n],min=1000000;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(min>arr[i])
                min=arr[i];
        }
        cout<<min*(n-1)<<"\n";
    }
    return 0;
}
