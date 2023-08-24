// Summation of non fatcors of given number from user.

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt =0, iSum =0;
    printf("Non Fators of %d are : \n", iNo);

    for(iCnt = 1; iCnt<=iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt ;
        }

    }
    return iCnt ;
}
int  main()
{
    int iValue =0 , iRet =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

     iRet =SumNonFactors(iValue);
     printf("Summation of non factors are %d\n", iRet);

    return 0;

}