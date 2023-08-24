#include<stdio.h>

int CountDigits(int iNo)
{
    //code
    return 0;
}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of Digits are : %d\n",iRet);

    return 0;
}