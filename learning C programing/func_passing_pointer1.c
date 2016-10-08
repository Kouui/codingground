#include <stdio.h>
#include <stdlib.h>
/*

*/
void getvalue (int *my_pointer)
{
    *my_pointer= 10000;
    return;
}

int main()
{
    int get_the_value;
    getvalue(&get_the_value);
    
    printf("the value of get_the_value = %d \n",get_the_value);
}