#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) printf("%d",i);
    printf("\n");
    if(n==1) return 0;
    for(int i=2;i<=n-1;i++)
    {
        printf("%d",i);
        for(int j=1;j<=n-2;j++) printf(" ");
        printf("%d\n",n-i+1);

    }
    for(int i=n;i>=1;i--) printf("%d",i);
    return 0;
}
