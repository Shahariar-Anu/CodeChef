#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t,even=0,odd=0;
	cin >> t;
	int arr[t+1];
	for(int i=1; i<=t; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even>odd)
        cout<<"READY FOR BATTLE\n";
    else
        cout<<"NOT READY\n";
	return 0;
}
