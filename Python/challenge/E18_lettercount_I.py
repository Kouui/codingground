def LetterCountI(str): 

    # code goes here
    str=str.lower()
    arr=str.split()
    num=[0]*len(arr)
    for i in range(0,len(arr)):
        for letter in arr[i]:
            num[i] += (arr[i].count(letter)-1)
    return arr[num.index(max(num))] if max(num)>0 else -1     
    
# keep this function call here  
print LetterCountI(raw_input())
