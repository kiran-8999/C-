#include<stdio.h>
//////////////////////////////////////////////////
//Que: Write a program to Display Hello 5 Times.
/////////////////////////////////////////////////
 void Display(int ino)
     {
       int i=0;
       for(i=1;i<=ino;i++)
       {
       printf("  %d  Hello \n",i);
       }
     }
 
    int main()
    {  
        int ivalue=0;
        printf(" Enter a no:  \n");
        scanf("%d",&ivalue);
        Display(ivalue);
        return 0;
    }