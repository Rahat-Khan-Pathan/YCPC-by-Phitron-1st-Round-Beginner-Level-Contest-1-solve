n=int(input())
for i in range(n):
    print(i+1,end="")
print()
if n>1:
    for i in range(2,n):
        print(i,end="")
        for j in range(n-2):
            print(" ",end="")
        print(n-i+1)
    for i in range(n):
        print(n-i,end="")