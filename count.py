n=int(input())

def solve( A):
    count=0
    for i in range(A+2):
        if '1' in str(i):
            print(str(i))
            count+=1
    
    return count        



print(solve(n))