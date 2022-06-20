///Program to display Summation//
//input: 4
///output: 1+2+3+4 

#include<stdio.h>
int Summation(int iValue)
{
    int i=0;
    int Sum=0;

    for( i=1; i<=iValue; i++)
    {
        Sum= Sum+i;
    }    
    return Sum;
}

int main()
{
    int iNo=0;
    int iRet=0;
    printf("\n Enter a number:");
    scanf("%d",&iNo);
    iRet=Summation(iNo);
    printf(" %d", iRet);
    return 0;
}