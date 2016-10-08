#include <stdio.h>
#include <stdlib.h>
/*
local variables have higher priority than global variables if they have same names
*/
//global variable
int g; //globle variable always initiatied by 0

void numberprint()
{
    int x;  //local variable in numberprint, can be any value when declared
}
int main() 
{
    int a=10; //local variable in main 
    int b;    //local variable in numberprint, can be any value when declared
    printf("local variable b = %d \n",b);
    printf("global variable g = %d \n",g);
}