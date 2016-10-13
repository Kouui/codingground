def DivisionStringified(num1,num2): 

    d = int(round(float(num1)/num2))
    s = ''
    for i, c in enumerate(reversed(str(d))):
        if i % 3 == 0:
            s = ',' + s
        s = c + s
    return s[:-1]
    
# keep this function call here  
print DivisionStringified(raw_input())
