def recursion(value,arr):
    if len(arr)==0 or value==0:
        return value==0
    return recursion(value,arr[1:]) or recursion(value-arr[0],arr[1:])


def ArrayAdditionI(arr): 

    # code goes here
    value=max(arr)
    arr.remove(value)
    if value<=0:
        return 'false'
    else:
        return 'ture' if recursion(value,arr) else 'false'
    
# keep this function call here  
print ArrayAdditionI(raw_input())
