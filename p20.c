// ************Problems On Digits************
//--------------------------------------------
// Return summation the digits
//input: 7856
//O/p:
//6   5   8   7

#include<stdio.h>

int SumDigits(int iValue)
{
    // if( iValue < 0)
    // {
    //     iValue = - iValue;
    // }
   int iDigit = 0;
   int sum = 0;
  while(iValue != 0)
  {
   iDigit = iValue % 10;
    sum = sum + iDigit;
   iValue = iValue / 10;
  }
 
  return sum;
}
int main()
{
   int iNo = 0;
   int iRet = 0;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);


   iRet = SumDigits(iNo);

    printf("Summation is: %d",iRet);
    
   return 0;
}