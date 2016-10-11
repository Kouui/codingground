def VowelCount(str): 

    # code goes here
    num=0
    str = str.lower()
    for char in str:
        if (char in 'aeiou'):
            num=num+1
    return num
    
# keep this function call here  
print VowelCount(raw_input())
