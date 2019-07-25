arr=[int(i) for i in input().split()]

def increasingTriplet(nums):
    arr=[int(1) for i in range(len(nums))]
    if len(nums)>0:
        for i in range(1,len(nums)):
            for j in range(i):
                if nums[i]>nums[j]:
                    arr[i]=max(arr[i],arr[j]+1)
            
            if arr[i]>=3:
                return True

    print(arr)    
    return False


print(increasingTriplet(arr))