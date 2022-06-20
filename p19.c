// ************Problems On Digits************
//--------------------------------------------
// Count No of Digits
//input: 7856
//O/p:
//4

#include<stdio.h>

int CountDigits(int iValue)
{
    // if( iValue < 0)
    // {
    //     iValue = - iValue;
    // }
   //int iDigit = 0;
   int iCnt = 0;
  while(iValue != 0)
  {
    // iDigit = iValue % 10;
    iCnt ++;
   iValue = iValue / 10;
   
  }
 
  return iCnt;
}
int main()
{
   int iNo = 0;
   int iRet =0 ;

   printf("\n Enter number:\n");
   scanf("%d",&iNo);

    iRet = CountDigits(iNo);
    printf("No of Digits: %d",iRet);
   return 0;
}