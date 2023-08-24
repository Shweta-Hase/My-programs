#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//5 : Perform the operation on array
bool CheckOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt =0;

    for(iCnt =0; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength =0, i=0, iValue =0;
    bool bRet = false;

    // 1 : Accept size of array
    printf("Enter the number of elemnets :\n");
    scanf("%d", &iLength);

    // 2: Alloacate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // 3: Accept the elemnts of array
    printf("Enter the elements :\n");

    for(i=0 ; i< iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    } 
    printf("Enter the elemts to findout the occurance :\n");
    scanf("%d",&iValue);

    // 4: Call the function 
    bRet = CheckOccurance(ptr, iLength,iValue);
    if(bRet == true)
    {
        printf("%d is occured in the array \n",iValue);
    }
    else
    {
        printf("There is no %d in the array \n",iValue);
    }

    // 6: Deallocate the memory
    free(ptr);
    return 0;
}