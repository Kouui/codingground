def LongestWord(sen): 

    # code goes here 
    # delete special characters by str.translate function
    sen = sen.translate(None, "~!@#$%^&*()-_+={}[]:;'<>?/,.|`")
    # now we can str.split string into list of words
    lst=sen.split()
    #determine the longest words by max(lst,key=len)
    word_longest=max(lst,key=len)
    
    return word_longest
    
# keep this function call here  
print LongestWord(raw_input())
