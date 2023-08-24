#include<stdio.h>

int CountDigits(int iNo)
{
   
    int iCnt =0 ;

    if(iNo == 0)
    {
        return 1 ;
    }

    if(iNo < 0 )
    {
        iNo = -iNo ;
    }

    while(iNo > 0)
    {
        
        iNo = iNo / 10 ;
        iCnt++;
    }
    return iCnt ;

}

int main()
{
    int iValue=0;
     int iRet =0;

     printf("Please Enter Number : \n");
     scanf("%d",&iValue);

     iRet = CountDigits(iValue);

     printf("Number of Digits are : %d\n",iRet);

     return 0;
}