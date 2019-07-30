arr=[int(i) for i in input().split()]
n=int(input())


def gcd(a,b):
    if b==0:
        return a
    else:
        return gcd(b,a%b)    


def solve(A,B):
    B=2*B
    arr=[]
    A.sort()
    n=len(A)
    sum=0
    maxx=0
    for i in range(n):
        for j in range(i+1,n):
            gd=gcd(A[j],A[i])
            maxx=0
            print(gd,A[j]%A[i])
            if A[j]%A[i]==0 and B>0:
                print(A[j],A[i])
                maxx=max(maxx,gd)

        sum+=maxx
        B-=2        

    print(sum)            


solve(arr,n)    