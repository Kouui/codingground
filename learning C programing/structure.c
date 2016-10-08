#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
A structure is a collection of different variables to make some logical groups.
*/

struct student
{
    int id;
    char name[20];
    float percentage;
};

/*
struct student
{
    int id;
    char name[20];
    float percentage;
} record;                  //or I can name a structure by this way 
*/

int main()
{
    struct student record1; //call the structure record1, and record the structure
    
    record1.id =1;
    strcpy(record1.name,"John");
    record1.percentage =70.20;
    
    printf("id = %d, name = %s, percentage=%f \n",
            record1.id,record1.name,record1.percentage);
    
    return 0;
}
