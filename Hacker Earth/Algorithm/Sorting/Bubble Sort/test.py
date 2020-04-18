T=int(input())
for i in range(T):
    maxi = 0
    N=int(input())
    A=list(map(int,input().split()))
    c=0
    for j in range(0,N):
        x=A[j]%2
        if(x==0):
            c+=1
        else:
            if(maxi < c):
                maxi = c
            c=0
    if(c == 0)
        print("-1")
        continue
    
    if(maxi < c):
        print(c)
    else:
        print(maxi)