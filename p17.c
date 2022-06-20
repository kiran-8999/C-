//Gold Rate
//1  4000
//2   8000
//5   20000
//10  40000
#include<stdio.h>
void JwellersPortal( int iWeight)
{
 switch(iWeight)
 {
         case 1:
         printf(" \n Bill amount is 4000");
         break;

         case 2:
         printf(" \n Bill amount is 8000");
         break;

         case 5:
         printf(" \n Bill amount is 20000");
         break;

         case 10:
         printf(" \n Bill amount is 40000");
         break;

         default:
         printf("Invalid wight");
 }
}
int main()
{
    int iNo = 0;
    printf("Enter the gold coin size:");
    scanf("%d",&iNo);

    JwellersPortal(iNo);
    return 0;
}