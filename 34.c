// call by address using Display function
//Array


#include<stdio.h>

void Display(int iptr[] ) //Array is internally considered as pointer and vice versa
{
    register int i = 0;

    printf("Elements You Entered : \n");

    for(i=0; i<5; i++)
    {
        printf(" %d\n", *iptr);

        iptr ++;   //pointer arithmatic
    }
}

int main()
{
    int Arr[5];
    register int i = 0;
        
    printf("Enter Elements: \n");
   
    for(i = 0; i< 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    Display(Arr);  //Display(100)   // first base address

    return 0;
}