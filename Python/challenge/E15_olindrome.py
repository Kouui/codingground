def Palindrome(str): 
    
    # delete space
    s = ''.join(str.split())
    return 'true' if s == s[::-1] else 'false'
    
# keep this function call here  
print Palindrome(raw_input())
