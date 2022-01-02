#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t,b;
	cin >> t;
	while(t--)
    {
        cin>>b;
        b=b-2;
        b=b/2;
        cout<<(int)(b*(b+1)/2)<<"\n";
    }
	return 0;
}
