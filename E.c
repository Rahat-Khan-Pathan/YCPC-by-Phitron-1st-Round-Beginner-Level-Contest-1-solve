#include <stdio.h>
#include <string.h>
int main()
{
    char s[21];
    while(scanf("%s",s) != EOF)
    {
        int l=0,r=strlen(s)-1,ans=0;
        while(l<r)
        {
            if(s[l] != s[r]) ans++;
            l++;
            r--;
        }
        printf("%d\n",ans);
    }
    return 0;
}
