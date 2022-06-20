// call by address using Display function
//Array  // no *


#include<stdio.h>

void Display(int Arr[] ) //Array is internally considered as pointer and vice versa
{
    register int i = 0;

    printf("Elements You Entered : \n");

    for(i=0; i<5; i++)
    {
        printf(" %d\n", Arr[i]);  
    }                 //=======
}

int main()
{
    int Brr[5];
    register int i = 0;
        
    printf("Enter Elements: \n");
   
    for(i = 0; i< 5; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Display(Brr);  // CALL BY ADDRESS //Display(100)

    return 0;
}