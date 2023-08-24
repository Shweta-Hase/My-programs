#include<stdio.h>
#include<stdlib.h>

// 6. perform the operation on array
int CalculateFrequency(int Arr[],int iSize ,int iNo)
{
 int iCnt =0,iFrequency =0;

 for(iCnt =0; iCnt < iSize ; iCnt++)
 {
    if(Arr[iCnt]  == iNo)
    {
        iFrequency++;
    }
 }
 return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iValue=0 , i =0, iRet =0, iLength =0;

    //1. Accept Size of array

printf("Enter number of elements :\n");
scanf("%d",&iLength);

// 2. Allocate memory for array

ptr = (int *)malloc(iLength *  sizeof(int));

// 3. Accept the elements of array

printf("Enter the elements :\n");

for(i =0; i < iLength;i++)
{
    scanf("%d",&ptr[i]);
}
 printf("Enter the element to findout the frequency : \n");
    scanf("%d",&iValue);

 // 4. Call the Function
iRet = CalculateFrequency(ptr, iLength,iValue);

printf("Frequency of %d is  : %d\n",iValue, iRet);

 // 5. Deallocate the memory
 free(ptr);

 return 0;
}