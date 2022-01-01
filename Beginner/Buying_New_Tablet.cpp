#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t,n;
    cin>>t;
    while(t--)
    {
        int b,w,h,p,maxArea=0;
        cin>>n>>b;
        while(n--)
        {
            cin>>w>>h>>p;
            if(p<=b)
                maxArea=max(maxArea, w*h);

        }
        if(maxArea==0)
            cout<<"no tablet\n";
        else
            cout<<maxArea<<"\n";
    }
    return 0;
}
