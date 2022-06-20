// Array traversing using for loop
//static memory allocation

#include<stdio.h>
int main()
{
    int Arr[5];  //static // hardcoded
    register int i = 0;
    
    printf("Enter Elements: \n");
   
    for(i = 0; i< 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Elements You Entered : \n");

    for(i=0; i<5; i++)
    {
        printf(" %d\n", Arr[i]);
    }

    return 0;
}