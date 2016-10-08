#include <stdio.h>
#include <stdlib.h>
/*

*/
int getsum(int *array_val,int size) //*array_val works like array_val[]
{                                   //array_val is the address of array_val[]??
    int sum = 0;
    for (int i=0; i<size; i++)
    {
        sum += array_val[i];
    }
    return sum;
}
int main()
{
    int my_array[4]={10,20,30,40};
    int mysum = getsum(my_array,4);
    
    printf("the value of my sum is %d \n",mysum);
}