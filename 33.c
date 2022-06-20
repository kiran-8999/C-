//self
// Array traversing using for loop
//Dynamic memory allocation // elements accepted from user

#include<stdio.h>
int main()
{
    int Arr[ 10] ;
    int n = 0;
    register int i = 0;

    printf("Enter Size of Array: \n");
    scanf("%d",&n);
    
    printf("Enter Elements: \n");
   
    for(i = 0; i< n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Elements You Entered : \n");

    for(i=0; i<n; i++)
    {
        printf(" %d\n", Arr[i]);
    }

    return 0;
}