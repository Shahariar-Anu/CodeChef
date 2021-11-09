#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    char a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a=='B' || a=='b')
            cout<<"BattleShip\n";
        else if(a=='C' || a=='c')
            cout<<"Cruiser\n";
        else if(a=='D' || a=='d')
            cout<<"Destroyer\n";
        else
            cout<<"Frigate\n";
    }
    return 0;
}

