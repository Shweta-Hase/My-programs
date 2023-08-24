#include<stdio.h>
#include<stdlib.h>

// 6. perform the operation on array
void DisplayEvenOddSum(int Arr[],int iSize)
{
 int iCnt =0, iEvenSum =0, iOddSum =0;

 for(iCnt =0; iCnt < iSize ; iCnt++)
 {
    if((Arr[iCnt] % 2) == 0)
    {
        iEvenSum = iEvenSum + Arr[iCnt];
    }
    else
    {
        iOddSum = iOddSum + Arr[iCnt];
    }
 }
 printf("Summation of even elements are : %d\n", iEvenSum);
 printf("Summation of Odd Elements are : %d\n", iOddSum);

}

int main()
{
    int *ptr = NULL;
    int iLength =0 , i =0;

    //1. Accept Size of array

printf("Enter number of elements :\n");
scanf("%d",&iLength);

// 2. Allocate memory for array

ptr = (int *)malloc(iLength *  sizeof(int));

// 3. Accept the elements of array

printf("Enter the elemetns :\n");

for(i =0; i < iLength;i++)
{
    scanf("%d",&ptr[i]);
}
 // 4. Call the Function
DisplayEvenOddSum(ptr, iLength);


 // 5. Deaallocate the memory
 free(ptr);

 return 0;
}
