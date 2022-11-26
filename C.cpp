#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=1;
        while(ans<n) ans*=2;
        cout<<ans<<endl;
    }
    return 0;
}

