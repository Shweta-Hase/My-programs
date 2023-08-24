
//////////////////////////////////////////////////
// Steps to follow while programming 
/////////////////////////////////////////////////

// Step 1 : Understand the problem statement 
// step 2 : Write the Algorithm 
// step 3 : Decide the programming language 
// step 4 :  Write the program 
// step  5 : Test the program

/////////////////////////////////////////////////
// Problrm statement : accept number from user and check whether it is divisible by 5 or not 
//
// Inpute : 23 
// output : 23 is not divisible by 5 
// 
// Input : 25 
// Output : 25 is divisible by 5 
// 
// Input : -20 
// Output : -20 is divisible by 5
//
//////////////////////////////////////

/////////////////////////////////////////////
// Algorothm
//////////////////////////////////////////

/*
   START 
   Accept number from user as No 
   Divide that No by 5 and check the value of remainder 
   If the value is 0
          Then display as No is divisible by 5 
      otherwise 
           Display as No is not divisible by 5
   END            
*/

////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
// Function Nmae  : DivisibleByFive
// Description :    To Check whether input is divisible by 5 or not 
// Input :           Interger 
// Output :           Integer 
// Author :          Hase Shweta Satish (MT10011)
// DAte :            18/06/2023
//
////////////////////////////////////////////////////////////

bool DivisibleByFive(int iNo)
{
    int iAns =0;
    iAns = iNo % 5 ;

    if(iAns == 0)
    {
        return true ;
    }
    else 
    {
        return false;
    }
}
///////////////////////////////////////////////////////////////
// Entry point of the application
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = DivisibleByFive(iValue);
    if(bRet == false)
    {
        printf("%d is not divisible by 5 \n", iValue );
    }
    else
    {
        printf("%d is Divisible by 5 \n",iValue);
    }

    return 0;

}

///////////////////////////////////////////////////////////
// Reuslt 
// Input : 25
//Output : 25 is divisible by 5
//
////////////////////////////////////////////////////////////