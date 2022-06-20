//pattern printing  // non linear  with filter same 64.c
//10/05
//border layout pattern
//---------------------------------------------
//i/p: row:6    col:6
//o/p:  *  *  *  *  *  * 
 //     *  *  $  $  $  *
 //     *  &  *  $  $  *
 //     *  &  &  *  $  *
 //     *  &  &  &  *  *
 //     *  *  *  *  *  *
        
#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j=0;
  
  if(iRow != iCol)  //  filter 
  {                 //  for diagonal if row and col are not equal
      printf("Enter valid input or enter same no of row and col");
      return;
  }

  for(i=1; i<=iRow; i++) //outer
  {
     for (j=1; j<=iCol; j++) //inner
     {
         if( (i== 1  || i==iRow)  || (j==1  || j==iCol) || (i==j))
         {
             printf(" * ");
         }
         else if( i> j)
         {
             printf(" & ");
         }
         else if(i<j)
         {
             printf(" $ ");
         }
        
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

