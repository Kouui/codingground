#include <stdio.h>
#include <stdlib.h>
/*
a pointer is a variable whose value is the address of another variable 
*/
int main()
{
    int val=30;
    int *pointer_p;
    pointer_p = &val;
    
    printf("address of val = %x \n",&val); //address is heximal number
    printf("value of pointer variable = %x \n",pointer_p);
    printf("value of pointer = %d \n",*pointer_p);
}