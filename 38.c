//Accept n no from user and display even no

#include<stdio.h>
#include<stdlib.h>

  void DisplayEven(int Arr[], int iLength)
  {
     int i = 0;
     printf("Even No are:\n");
     for(i=0; i<iLength; i++)
     {
         if(Arr[i] % 2 == 0)
         {
           printf("%d\n ",Arr[i]);
         } 
     }   
  }

int main()
{
   int iSize = 0;
   int i = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   DisplayEven(ptr,iSize);  //fun call

   free(ptr);    // memory free or deallocate
   return 0;
}
