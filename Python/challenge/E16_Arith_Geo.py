def ArithGeo(arr): 

    if len(arr) < 3:
        return -1
        
    dif = arr[1] - arr[0]
    is_ari = True
    for i in xrange(2, len(arr)):
        if arr[i] - arr[i-1] != dif:
            is_ari = False
    if is_ari:
        return 'Arithmetic'
        
    rat = float(arr[1])/arr[0]
    for i in xrange(2, len(arr)):
        if float(arr[i])/arr[i-1] != rat:
            return -1
    return 'Geometric'
    
# keep this function call here  
print ArithGeo(raw_input())
