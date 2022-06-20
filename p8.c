///Program to display 1 to 5 on screen take input from user//
//using while loop
///output:  1   2   3   4   5//

#include<stdio.h>
void Display(int iValue)
{
    int i=1;
    if(iValue<0)   //updator
    {
        iValue = -iValue;
    }
    while(i<=iValue)
    {
        printf("    \n %d", i );
        i++;
    }
}

int main()
{
    int iNo;
    printf(" Enter the Number:  ");
    scanf("%d",&iNo);
    Display(iNo);
    return 0;
}