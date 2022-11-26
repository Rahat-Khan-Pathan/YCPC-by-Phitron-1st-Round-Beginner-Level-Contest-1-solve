#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int l=0,r=s.size()-1,ans=0;
        while(l<r)
        {
            if(s[l] != s[r]) ans++;
            l++;
            r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}

