#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int ans=1;
        while(ans<n) ans*=2;
        printf("%d\n",ans);
    }
    return 0;
}
