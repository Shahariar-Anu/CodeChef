#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int r,o,c,b;
    cin>>r>>o>>c;
    b=(20-o)*6*6;
    if(b+c>r)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}


