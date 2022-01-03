#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n>>k;
        int arr[n],count=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if((arr[i]+k)%7==0)
                count++;
        }
        cout<<count<<"\n";
    }
	return 0;
}

