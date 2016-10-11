def LetterCapitalize(str): 

    # code goes here
    arr=str.split()
    str1=arr[0].capitalize()
    for char in arr[1:]:
        char=char.capitalize()
        str1=str1+' '+char
    return str1
    
# keep this function call here  
print LetterCapitalize(raw_input())
