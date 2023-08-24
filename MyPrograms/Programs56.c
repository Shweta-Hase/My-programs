#include<stdio.h>

int CountEvenOddDigits(int iNo)
{
  int iEvenCnt =0 , iDigit =0, iOddCnt =0;

  if(iNo == 0)
  {
    printf(" Number of even Digits  are :1\n");
     printf(" Number of odd Digits  are :0\n");
  }

  while(iNo != 0)
  {
    iDigit = iNo % 10;
    if((iDigit % 2) == 0)
    {
        iEvenCnt++;
    }
    else
    {
         iOddCnt++;
    }
    iNo = iNo / 10 ;
  }
   printf(" Number of even Digits  are :%d\n", iEvenCnt);
     printf(" Number of odd Digits  are :%d\n",iOddCnt);
}
int main()
{
    int iValue = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);
    CountEvenOddDigits(iValue);
   
    return 0;
}
