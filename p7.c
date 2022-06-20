///Program to display 1 to 5 on screen take input from user//
//using for loop
///output:  1   2   3   4   5//

#include<stdio.h>
void Display(int iValue)
{
    int i=0;
    for(int i=1; i<=iValue; i++)
    {
        printf("    \n %d", i );
    }
}

int main()
{
    int iNo;
    printf(" Enter the Number:  \n");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}