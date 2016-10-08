#include <stdio.h>
#include <stdlib.h>
/*

*/

int main() 
{
    int arr1[3]={20, 30, 60};  //start from 0 just like IDL
    printf("the 2nd number of arr1 is %d \n",arr1[0]);
    
    char chararr1[3]={'a', 'b', 'c'};
    
    for (int i=0; i<=2; i++)
    {
        printf("element %d is %d \n",i,arr1[i]);
    }
}