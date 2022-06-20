//Accept N no and return largest no and smallest from that
//IMP for interview   largr or small

#include<stdio.h>
#include<stdlib.h>

  int MaxNo(int Arr[], int iLength)
  {
     int i = 0;
     int iMax = Arr[0] ; 
     
          for(i=0; i<iLength; i++)
     {
         if(iMax < Arr[i])
         {
             iMax = Arr[i];
         }     
     }   
     return iMax;
  }

    int MinNo(int Arr[], int iLength)
  {
     int i = 0;
     int iMin = Arr[0];
     
          for(i=0; i<iLength; i++)
     {
         if(iMin > Arr[i])
         {
             iMin = Arr[i];
         }     
     }   
     return iMin;
  }

int main()
{
   int iSize = 0;
   int i = 0;
   int iRet1 = 0;
   int iRet2 = 0;
   int  *ptr =NULL;

   printf("Enter number of elements: \n");
   scanf("%d",&iSize);

   ptr =(int *) malloc(iSize *sizeof(int));

   printf("Enter Values of Array: \n");

   for(i=0; i<iSize; i++)
   {
       scanf("%d",&ptr[i]);
   }

   iRet1 = MaxNo(ptr,iSize);  //fun call

   iRet2 = MinNo(ptr,iSize);

   printf("Maximun  No is : %d \n",iRet1);
   printf("Minimum No is : %d \n",iRet2);


   free(ptr);    
   return 0;
}
