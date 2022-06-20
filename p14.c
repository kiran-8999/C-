// check weather given no is divisible by 23 and 5 or not
// using bool
#include<stdio.h>
#include<stdbool.h>

bool CheckNo(int iValue)
{
  if(
      ((iValue % 3)==0) && 
      ((iValue % 5)==0)
    ) 

  {
      return true;
  }
  else
  {
      return false;
  }
}
int main()
{
   int iNo;
   bool bRet = false;
   printf(" Enter a NUmber:");
   scanf("%d",&iNo);

    bRet = CheckNo(iNo);
    if(bRet == true)
    {
      printf("%d is Divisible By 3 and 5 \n",iNo);
    }
    else
    {
      printf("%d is not Divisible By 3 and 5 ",iNo);
    }  
    return 0;
}