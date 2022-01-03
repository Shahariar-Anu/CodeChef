#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        int a=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='Y')
            {
                a=1;
                cout<<"NOT INDIAN\n";
                break;
            }
            else if(s[i]=='I')
            {
                a=1;
                cout<<"INDIAN\n";
                break;
            }
        }
        if(a==0)
            cout<<"NOT SURE\n";
    }
	return 0;
}
