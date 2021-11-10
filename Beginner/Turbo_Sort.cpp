#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,i;
    cin>>t;
    int arr[t+1];
    for(i=0; i<t; i++)
        cin>>arr[i];

    sort(arr,arr+t);
    for(i=0; i<t; i++)
        cout<<arr[i]<<"\n";
    return 0;
}

