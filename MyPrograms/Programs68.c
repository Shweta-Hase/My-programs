
// Problems on N numbers 

// 1. In this topic we Accept multiple Numbers from user and perform the operation on that N(multiples) numbers
// 2. In this topic we create the single variable but in this topic to store multiple numbers we have to create an array .
//3. To solve the question in this topic we going to below rules: 
     //  we are accepting the number of elements from user
     // 2. According to number of elements we are going to allocate the memory dianamically    
     // 3. After allocating dynamic memory we accept actual numbers from user and store it in that dynamically allocated memory .
     //4. After storing all that elemnets in that memory we pass at array to the function which is going to perform the operation.
     //5 After Completing the task we have to dealocate that dynamic memory explicitly.

 #include<stdio.h>
 #include<stdlib.h>

int main()
{
    int Arr[5];
    int iCnt =0;

    printf("Enter the Elements : \n");

    for(iCnt =0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Elements from array : \n");
     
     for(iCnt =0; iCnt < 5 ; iCnt++)
     {
        printf("%d\n",Arr[iCnt]);
     }
     return 0;
}