#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
a string is an array of characters
*/

int main()
{
    char string1[4] = {'H', 'e', 'y','\0'}; 
    //we must add one more character '\0' to end a string, so it is [4] not [3].
    char string2[]  = "Hey";
    
    printf("my string value = %s \n",string1);
    printf("my string value = %s \n",string2);
    
    char string3[12] = "hello"; //its length is 5 for 5 character not 12
    char string4[12] = "world";
    char string5[12];
    
    strcpy(string5, string3); //strcpy(strA, strB) copy from strB to strA
    strcat(string3, string4); //strcat(strA, strB) add strB to strA
    strlen(string3); //gives the length of a string
    int length_string3 = strlen(string3);
    
    printf("strcpy = %s \n",string5);
    printf("strcpy = %s \n",string3);
    printf("strlen = %d n",length_string3);
    
}
