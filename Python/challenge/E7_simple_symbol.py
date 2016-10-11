def SimpleSymbols(str): 

    # code goes here
    # normalize the first and last letter
    str='='+str+'='
    for i in range(0,len(str)):
        # recognize letters
        if str[i].isalpha():
            # case to output false 
            if (str[i-1] != '+') | (str[i+1] != '+'):
                return 'false'
    # if not false, that's true
    return 'true'
    
# keep this function call here  
print SimpleSymbols(raw_input())
