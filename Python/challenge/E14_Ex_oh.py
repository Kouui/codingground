def ExOh(str): 

  # we split the string with the separator being
  # the x's and o's and compare them

  # this returns a string containing only o's
  x = "".join(str.split("x"))

  # this returns a string containing only x's
  o = "".join(str.split("o"))

  # see if their lengths are equal
  if len(x) == len(o):
    return "true"
  else:
    return "false"
    
print ExOh("xooox") 
