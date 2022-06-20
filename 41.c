//Accept N no and return largest no from that
//IMP for interview   (largr or small)

#include<stdio.h>
#include<stdlib.h>

  int MaxNo(int Arr[], int iLength)
  {
     int i = 0;
     int iMax = 0;  ///it will work only for +ve int 
   //int Max = Arr[0];

          for(i=0; i<iLength; i++)
     {
         if(iMax < Arr[i])
         {
             iMax = Arr[i];
         }     
     }   
     return iMax;
  }

  
int main()
{
   int iSize = 0;
   int i = 0;
   int iRet = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   iRet = MaxNo(ptr,iSize);  //fun call

   printf("Maximun  No is : %d \n",iRet);
  
   free(ptr);    
   return 0;
}
