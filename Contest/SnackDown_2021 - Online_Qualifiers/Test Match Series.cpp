#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,r[6],ind=0,eng=0;
    cin>>t;
    while(t--)
    {
        for(int i=0; i<5; i++)
        {
            cin>>r[i];
            if(r[i]==1)
                ind++;
            else if(r[i]==2)
                eng++;
        }
        if(ind>eng)
            cout<<"INDIA\n";
        else if(eng>ind)
            cout<<"ENGLAND\n";
        else
            cout<<"DRAW\n";
        ind=0;
        eng=0;
    }
    return 0;
}
