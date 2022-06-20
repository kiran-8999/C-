//pattern printing // linear pattern 
// think like odd even // mhnj 2 chya jagi * like  
//09/05
//---------------------------------------------
//i/p: 6
//o/p:  1  *  3  *  5  *

#include<stdio.h>

void Display(int iValue)
{
  int i = 0;

  for(i=1; i<=iValue; i++)
  {
      if((i % 2) == 0) 
      {
          printf(" *  ");
      }
      else
      {
      printf("%d  ",i);
      }
  }
  
}

  int main()
  {
      int iNo = 0;

      printf("Please Enter the value: \n");
      scanf("%d",&iNo);

      Display(iNo);

      return 0;
  } 

