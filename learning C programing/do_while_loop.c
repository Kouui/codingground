#include <stdio.h>
#include <stdlib.h>
/*
to see the difference btween do_while loop and while loop
*/
int main()
{
  int i=11;
  do
  { 
    printf("Value of i = %d \n",i); 
    i++;
  } while (i <= 10);
  
  int j=11;
  while (j <= 10)
  {
    printf("Value of j = %d \n",j);
    j++
  }
}
