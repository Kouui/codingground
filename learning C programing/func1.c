#include <stdio.h>
#include <stdlib.h>
/*
type name(type1 arg1, type2 arg2, ...)
{
    contents
}

void name()
{
    
}

difference between defining function above main and below main is 
that you need to void myfunc() above main additionally
*/

void myfunc()
{
    printf("sum=%d \n",10+52);
    printf("we are inside a function \n");
}
int main()  //every program has at least one function called main 
    myfunc();
}