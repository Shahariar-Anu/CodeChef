#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        if(x<100)
            cout<<"Easy\n";
        else if(x<200)
            cout<<"Medium\n";
        else
            cout<<"Hard\n";
    }
    return 0;
}
