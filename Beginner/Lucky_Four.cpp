#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    string a;
    while(t--)
    {
        cin>>a;
        int count=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]=='4')
                count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}
