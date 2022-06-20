///Program to display * pattern//

///output:  *
//          *  *
//          *  *  *
//          *  *  *  *

#include<stdio.h>
void Display()
{
    int i=0;
    int j=0;
    for( i=1; i<5; i++)
    {
        for(j=0; j<i; j++)
          {
        printf(" * ");
          }
          printf("\n");
    }
}

int main()
{
    Display();
    
    return 0;
}