//bool  //**********without FLAg
// Accept N no and accept another no 
//and check whether the no is present or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

  bool Search(int Arr[], int iLength,int iValue)
  {
     int i = 0;
     
          for(i=0; i<iLength; i++)
     {
         if(iValue == Arr[i])
         {
             break;
         }
       
     }   
     if(i == iLength) 
     {
         return false;
     }
     else{
         return true;
     }
  }

int main()
{
   int iSize = 0;
   int i = 0;
   bool bRet;
   int iNo1 = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   printf("Enter a no to search:\n") ;
   scanf ("%d", &iNo1);

   bRet = Search(ptr,iSize,iNo1);  //fun call
    if(bRet==true)
   {
       printf("Element is present\n");
   }
   else
   {
       printf("Element is NOT present\n");
   }
  
   free(ptr);    // memory free or deallocate
   return 0;
}
