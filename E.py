while True:
    try:
        s=input()
        l=0
        r=len(s)-1
        ans=0
        while l<r:
            if s[l]!=s[r]:
                ans+=1
            l+=1
            r-=1
        print(ans)
    except:
        break