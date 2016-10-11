def LetterChanges(str): 

    # code goes here
    #define a new string
    t=''      
    for char in str:
        # once we have a char, you can use char.isalpha(), char.lower(), char.upper() and so on
        # if belongs to alphabet then char.isalpha() returns true
        if char.isalpha():
            # using char.lower() instead of char here to include case of 'Z', changing both 'Z' and 'z' to 'a'
            if char.lower() == 'z':
                char='a'
            else:
                # now we shift all alphabet by 1, ord(char) returns ASCII value of char and chr(value) returns the corresponding character
                char=chr(ord(char)+1)
                # make all characters in the string to be charlower, so we only have to change 'aeiou' to 'AEIOU' later
                char=char.lower()
        # change 'aeiou' to 'AEIOU'
        if char in 'aeiou':
            char=char.upper()
        # creating string by string addition
        t=t+char
    return t
    
# keep this function call here  
print LetterChanges(raw_input())
