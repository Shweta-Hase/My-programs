#include<stdio.h>
#include<stdlib.h>

// 6. perform the operation on array
___________ ______(int Arr[],int iSize)
{

}

int main()
{
    int *ptr = NULL;
    int iLength =0 , i =0, iRet =0;

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

 _________= _____ ______(ptr, iLength);

 // 5. Deaallocate the memory
 free(ptr);

 return 0;
}