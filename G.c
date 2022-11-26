#include <stdio.h>
#include <string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) printf("Argentina");
    else if(b>a) printf("Brazil");
    else
    {
        A:
        char x[6],y[6];
        scanf("%s %s",x,y);
        int ans1=0,ans2=0;
        for(int i=0;i<5;i++)
        {
            if(x[i]=='1') ans1++;
            if(y[i]=='1') ans2++;
        }
        if(ans1>ans2) printf("Argentina");
        else if(ans2>ans1) printf("Brazil");
        else goto A;
    }
    return 0;
}
