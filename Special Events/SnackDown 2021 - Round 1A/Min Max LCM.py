### KNOWLEDGE IS POWER  ###

n=int(input())
for i in range(0,n):
    a,b=list(map(int,input().split()))
    print(2*a,end=' ')
    print(a*b*(a*b-1))
