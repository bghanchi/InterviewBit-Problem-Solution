a=[int(i) for i in input().split()]
b=[int(i) for i in input().split()]


def findMedianSortedArrays(A, B):
    c=A+B
    c.sort()
    mid=0
    if len(c)%2==0:
        mid=int(len(c)/2)
        return (c[mid-1]+c[mid])/2
    
    else:
        return c[mid-1]



print(findMedianSortedArrays(a,b))