#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mystruct
{
    int myint;
    char mychar;
} record;

/*
A union locates a size of his variable who has the lagest size
Members share space inside a union which is different in the case of structure.
*/
union myunion    // so 4 byte as myint, and it is 4*2 in the case of structure
{
    int myint;   //4 byte
    char mychar; //1 byte
};

int main()
{
    union myunion uni;
    uni.myint = 4;
    uni.mychar = 9;
    
    printf("%i \n",uni.mychar);//get 9
    printf("%i \n",uni.myint); //also get get 9 bacause mychar overwrote myint
    
    printf("the size of structure is %d \n",sizeof(record));
    printf("the size of union is %d \n",sizeof(uni));
    
    
}
