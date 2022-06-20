//alpha pattern printing  // 
//10/05

//---------------------------------------------
//i/p: row:4    col:4
//o/p: 
/*

 A  
 B  B  
 C  C  C  
 D  D  D  D

 */  
        
#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j=0;
  char ch = '\0';

  for(i=1, ch='A'; i<=iRow; i++, ch++) //outer
  {
     for (j=1;   j<=i;  j++) //inner   
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

