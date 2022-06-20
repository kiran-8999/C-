// ************Problems On Digits************
//--------------------------------------------
// return addiotion of even digits
//input: 721
//O/p:
//2

#include<stdio.h>

void DisplayEven(int iValue)
{
    // if( iValue < 0)
    // {
    //     iValue = - iValue;
    // }
   int iDigit = 0;
   
  while(iValue != 0)
  {
       iDigit = iValue % 10;
     if (iDigit % 2 ==0)
     {
         printf("\n %d",iDigit);
     }
     iValue = iValue / 10;
   
  }
}
int main()
{
   int iNo = 0;
   int iRet =0 ;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);

     DisplayEven(iNo);
    
   return 0;
}