#include <stdio.h>
#include <stdlib.h>
/*

*/
int main()
{
    int arr2[2][3] = {     //row x colume
        {1,3,2},    //row 0
        {5,6,8}     //row 1
    };
    
    for (int i; i<=1;i++)
    {
        for (int j=0; j<=2; j++)
        {
            printf("arr2[%d][$d] = %d",i,j,arr2[i][j]);
        }
    }
}