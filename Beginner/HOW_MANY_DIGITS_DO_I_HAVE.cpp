#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    if(s.size()>3)
        cout<<"More than 3 digits";
    else if(s.size()==1)
        cout<<"1";
    else if(s.size()==2)
        cout<<"2";
    else if(s.size()==3)
        cout<<"3";
    return 0;
}

