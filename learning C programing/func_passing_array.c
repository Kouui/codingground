#include <stdio.h>
#include <stdlib.h>
/*

*/
int arraysum(int arr[],int size)  //unsize array to be used in different condition
{
   int sum = 0;
   for(int i=0; i < size; i++)
   {
       sum += arr[i];   //sum = sum + arr[i];
   }
    return sum;
}
int main()
{
    int arr3[6] = {20,30,40,50,55,60};
    int sum_of_arr3 = arraysum(arr3, 6);
    
    printf("array sum = %d \n",sum_of_arr3);
}