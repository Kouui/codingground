def TimeConvert(num): 

    # code goes here
    hr=num/60
    min=num%60
    arr=[hr,min]
    # str.join(arr) can only work on arr of string
    time=':'.join(str(e) for e in arr)
    
    return time
# keep this function call here  
print TimeConvert(raw_input())
