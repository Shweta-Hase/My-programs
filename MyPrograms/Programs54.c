#include<stdio.h>

int SumDigits(int iNo)
{
    int iDigit =0;
    int iSum =0 ;
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    

    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10) ;
        iNo = iNo / 10;
    }

    return iSum;

}

int main()
{
    int iValue=0;
     int iRet =0;

     printf("Please Enter Number : \n");
     scanf("%d",&iValue);

     iRet = SumDigits(iValue);

     printf("Summation Digits are : %d\n",iRet);

     return 0;
} 