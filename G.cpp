#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<"Argentina";
    else if(b>a) cout<<"Brazil";
    else
    {
        A:
        string x,y;
        cin>>x>>y;
        int ans1=0,ans2=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]=='1') ans1++;
            if(y[i]=='1') ans2++;
        }
        if(ans1>ans2) cout<<"Argentina";
        else if(ans2>ans1) cout<<"Brazil";
        else goto A;
    }
    return 0;
}

