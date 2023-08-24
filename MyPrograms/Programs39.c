// input : 5
// output : 5  4  3  2  1

#include<stdio.h>
void DisplayReverse(int iNo)
{
    int iCnt =0;
    printf("-------------------------------------\n");
    for( iCnt =iNo; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n-------------------------------------\n");
}
int main()
{
    int iValue =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}