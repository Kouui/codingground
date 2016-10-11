def FirstFactorial(num): 
    # code goes here
    t=num
    l=range(num-1)
    for i in l:
        t=t*(l[i]+1)
    return t
    
# keep this function call here  
print FirstFactorial(raw_input())
