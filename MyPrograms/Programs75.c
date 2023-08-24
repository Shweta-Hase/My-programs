

#include<stdio.h>
#include<stdlib.h>

// 6. perform the operation on array
void DisplayEvenOdd(int Arr[],int iSize)
{
 int iCnt =0, iEvenCnt =0;

 for(iCnt =0; iCnt < iSize ; iCnt++)
 {
    if((Arr[iCnt] % 2) == 0)
    {
        iEvenCnt++;
    }
 }
 printf("Number of even elements are : %d\n", iEvenCnt);
 printf("Number of Odd Elements are : %d\n", iSize - iEvenCnt);

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
DisplayEvenOdd(ptr, iLength);


 // 5. Deaallocate the memory
 free(ptr);

 return 0;
}
