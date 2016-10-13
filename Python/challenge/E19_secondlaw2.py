def SecondGreatLow(arr): 

    set_arr = set(arr)

    max_arr = max(set_arr)
    set_arr.remove(max_arr)
    sec_max = max(set_arr)
    
    set_arr.add(max_arr)
    
    min_arr = min(set_arr)
    set_arr.remove(min_arr)
    sec_min = min(set_arr)
    
    return str(sec_min) + ' ' + str(sec_max)
    
# keep this function call here  
print SecondGreatLow(raw_input())
