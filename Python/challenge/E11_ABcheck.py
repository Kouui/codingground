def ABCheck(str): 

    # code goes here
    str = str.lower()

    # loop through the string
    for i in range(0, len(str)):
    
      # check for "a...b" but we can't go out of bounds on the 
      # list or an error will be thrown
      if (str[i] == 'a' and i+4 < len(str) and str[i+4] == 'b'):
        return 'true'

      # check for "b...a"
      if (str[i] == 'b' and i+4 < len(str) and str[i+4] == 'a'):
        return 'true'

    # if none of above were encountered
    # then return false by default
    return 'false'
    
# keep this function call here  
print ABCheck(raw_input())
