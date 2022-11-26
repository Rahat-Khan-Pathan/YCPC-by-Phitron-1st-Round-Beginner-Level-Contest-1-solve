a,b=map(int,input().split(' '))
if a>b:
    print("Argentina")
elif b>a:
    print("Brazil")
else:
    ans1=0
    ans2=0
    while ans1==ans2:
        x=input()
        y=input()
        for indx in range(len(x)):
            if x[indx]=='1':
                ans1+=1
            if y[indx]=='1':
                ans2+=1
        if ans1>ans2:
            print("Argentina")
        elif ans2>ans1:
            print("Brazil")