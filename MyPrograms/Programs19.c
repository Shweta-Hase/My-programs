// While loop ....Demonstration of iteration using while loop

#include<stdio.h>

void Display( int iNo)
{
    int iCnt =0;

    iCnt =1;
    while(iCnt <= iNo)
    {
        printf("Jay GANESH...\n");
        iCnt++;
    }
}

int main()
{

    int iValue =0;
    printf("Enter the Number of iterations: \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}