#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x;
    double y;
    cin>>x>>y;
    if(x%5!=0 || x+.5 > y)
        cout<<fixed<<setprecision(2)<<y<<"\n";
    else if(x%5==0 && x<y)
        cout<<fixed<<setprecision(2)<<y-(x+.50)<<"\n";
    return 0;
}
