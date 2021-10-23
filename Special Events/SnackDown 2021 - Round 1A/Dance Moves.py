### KNOWLEDGE IS POWER  ###

for i in range(int(input())):
    x,y=map(int,input().split())
    d=y-x
    if(x<y):
        if(d%2==0):
            print(d//2)
        else:
            ans=d//2 
            r=ans+2
            print(r)
    else:
        print(x-y)
