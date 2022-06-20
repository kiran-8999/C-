//alpha pattern printing  // 
//10/05

//---------------------------------------------
//i/p: row:4    col:4
//o/p: 
/*

 a 
 a  b
 a  b  c
 a  b  c  d

 */  
        
#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j=0;
  char ch = '\0';

  for(i=1; i<=iRow; i++) //outer
  {
     for (j=1, ch='a';   j<=i;  j++, ch++) //inner   
     {         
             printf(" %c ",ch);
     }   
    printf("\n");
  }
}

  int main()
  {
      int iNo1 = 0 , iNo2 = 0;

      printf("Please Enter number of Row: \n");
      scanf("%d",&iNo1);

      printf("Please Enter number of columns: \n");
      scanf("%d",&iNo2);

      Display(iNo1, iNo2);

      return 0;
  } 

