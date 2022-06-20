//malloc
// Array traversing using for loop
//Dynamic memory allocation // elements accepted from user

#include<stdio.h>
#include<stdlib.h>      //for malloc and free

void Display(int Arr[], int iLegth ) 
{
    register int i = 0;

    printf("Elements You Entered : \n");

    for(i=0; i<iLegth; i++)
    {
        printf(" %d\n", Arr[i]);

    }
}

int main()
{
    int *ptr = NULL;
    register int i = 0;
    int isize = 0;

    printf("Enter the no of  Elements: \n");
    scanf("%d",&isize);

    ptr = (int *)malloc(isize *sizeof(int));  // malloc - memory allocation
        
    printf("Enter Elements: \n");
   
    for(i = 0; i< isize; i++)
    {
        scanf("%d", &ptr[i]);
    }

    Display(ptr,isize);  //Display(100)   // first base address

    free(ptr);
    return 0;
}