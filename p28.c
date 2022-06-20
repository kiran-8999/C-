//incomplete // logical error
//Accept a no
//check whether   // means == boelean // true or false
// Armstrong no or not
//EX:   153 = 1^3  +  5^3   +3^3
//     1634 = 1^4  +  6^4   +3^4  +4^4
//======================================================

#include<stdio.h>
#include<stdbool.h>

int Power(int iValue1, int iValue2)
{
    int iMult = 1;
    int i = 0;     

    for (i =1 ; i<=iValue2; i++)
    {
        iMult = iMult * iValue1;
    }   
    return iMult;
}

bool CheckArmstrong( int iValue)
{
    int iDigCnt=0;
    int itemp=0;
    int iDigit = 0;
    int isum = 0;
    
    // if(iValue <0)
    // {
    //     iValue = -iValue;  //updator
    // }

    iValue = itemp;  //value zerox krun thevli
    
    //calculate digits
 while(iValue != 0)
  {
     iDigCnt++;
     iValue = iValue / 10;
  }  
  //--------------------------------
   iValue = itemp;  //value copy keli
   
   while(iValue != 0)
  {
     iDigit = iValue % 10;
     isum = isum + Power(iDigit,iDigCnt);
     iValue = iValue / 10;
  }  

  if(isum == itemp)
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
    int iNo = 0;
    bool bRet ;

    printf("Enter a No:");
    scanf("%d",&iNo);

    bRet = CheckArmstrong(iNo);

    if(bRet == true)
    {
        printf("%d is a Armstrong No \n", iNo);
    }
    else
    {
        printf("%d is NOT Armstrong No \n", iNo);
    }

return 0;
}
