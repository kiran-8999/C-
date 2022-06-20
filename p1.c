#include<stdio.h>
/////////////////////////////////////////////////////////
// Que:Write a program to perform Addition of two numbers.
/////////////////////////////////////////////////////////
int Addition(int ivalue1,int ivalue2)
{
    int ires=0;
    ires=ivalue1+ivalue2;
    return ires;
}

 int main()
 {
     int iNo1=0;
     int iNo2=0;
     int iNo3=0;
     printf("Enter a number 1:\n");
     scanf("%d",&iNo1);

     printf("Enter a number 2:\n");
     scanf("%d",&iNo2);

     iNo3=Addition(iNo1,iNo2);

     printf(" Addition is:%d",iNo3);
     return 0;
 }