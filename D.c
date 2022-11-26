#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b) printf("Argentina");
    else if(b>a) printf("Brazil");
    else printf("Draw");
    return 0;
}
