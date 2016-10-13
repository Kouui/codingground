def SecondGreatLow(arr): 

    # code goes here 
    arr=list(arr)
    n_min=arr.count(min(arr))
    n_max=arr.count(max(arr))
    arr.sort()
    arr1=arr[n_min:(len(arr)-n_max)]
    if len(arr1)>1:
        return str(arr1[0]) + ' ' + str(arr1[-1])
    elif len(arr1)==0:
        return str(arr[0]) + ' ' + str(arr[-1])
    else:
        return str(arr1[0])
# keep this function call here  
print SecondGreatLow(raw_input())
