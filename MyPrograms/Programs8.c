////////////////////////////////////////////////////////////////
// Steps to Follow while Programming 
////////////////////////////////////////////////////////////////////////////

// Step 1 Understand the Problem statement 
// Step 2 Write the Algorithm
// Step 3 Decide the Programming language
// step 4 Write the Program 
// step 5 test the Program

///////////////////////////////////////////////////////////
// Problem Statement : Accept number from user and check whether it is divisible by 5 or not  
//
// Input : 23 
// Output : 23 is not divisible by 5
// 
// Input : 25
// Output : 25 is Divisible by 5
//
//Input : -20
//Output : -20 is Divisible by 5
//
//////////////////////////////////////////////////////////////////////////////
//
//////////////////////////////////////////////////////////////////////////
// Algorithm 
////////////////////////////////////////////////////////////////////

/*
START
Accept NUmber from user as No
Divide that No by 5 and check the value of remainder 
If the Value is 0
   then display as No is divisible by 5
 Otherwise
    display as No is not divisible by 5
END
*/

////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////
//
//   Function Name : DivisibleByFive
//   Description :  To check whether input is Divisible by 5 or not 
//   Input :        Integer
//   Output :       Integer
//   Auther :       Shweta Satish Hase
//    Date :        18/06/2023
//
////////////////////////////////////////////

int DivisibleByFive(int iNo)
{

    int iAns =0;
    iAns = iNo % 5 ;

    if(iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
////////////////////////////////////////////////////////
//    Entry Point of the Apllication 
////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet =0;
     printf("Enter the Number :\n");
     scanf("%d",&iValue);

     iRet = DivisibleByFive(iValue);
     if(iRet == 0)
     {
        printf("%d is not Divisible by 5 \n ", iValue);
     }
     else
     {
        printf("%d is  Divisible by 5 \n ", iValue);
     }

     return 0;
}

/////////////////////////////////////////////////
// Reuslt 
// Input : 25
// Output : 25 is divisible by 5 
//
///////////////////////////////////////////////////