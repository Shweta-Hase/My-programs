#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt =0;

    for(iCnt =2; iCnt<= (iNo/2);  iCnt+=2)
    {
        if((iNo % iCnt ) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue =0;
     printf("Enter the Number ");
     scanf("%d",&iValue);

     DisplayEvenFactors(iValue);

     return 0;
}