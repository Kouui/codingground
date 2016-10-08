#include <stdio.h>
#include <stdlib.h>
/*
a pointer is a variable whose value is the address of another variable 
&variable: gives the address of the value.
*pointer: used to declare pointer and to give the value of a pointer.
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
