#include <stdio.h>
#include <stdlib.h>
/*

*/
/*
void Sum(int a, int b)
{
    int sum=a+b;
    printf("Sum = %d \n",sum);
}
*/

int Sum(int a, int b)
{
    return(a+b);
}
int main() 
{
    int x, y;
    printf("please enter two numbers \n");
    printf("number1:");
    scanf("%d",&x);
    printf("number2:");
    scanf("%d",&y);
    
    int sum;
    sum=Sum(x, y);
    printf("the sum of %d and %d is %d \n",x,y,sum);
    
}