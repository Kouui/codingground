def AlphabetSoup(str): 

    # code goes here
    # in order to use list.sort() we have to convert str into list, ex: list('abcd') gives ['a','b','c','d']
    char_arr=list(str)
    char_arr.sort()
    # now char_arr has been sorted, so just use ''.join(list of str) function to concentrate all the letters
    return ''.join(char_arr)
    
# keep this function call here  
print AlphabetSoup(raw_input())
