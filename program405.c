//////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program405.c
//    Description :     Used to calulate factorial of natural numbers using recursion.
//    Author :          Sneha Mohane
//    Date :            14/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                  

int Factorial(
                int iNo
             )
{
    static int iSum = 1;

    if(iNo > 1)
    {
        iSum = iSum * iNo;
        Factorial(iNo--);
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////
//
//	Function Name :      	Entry point function
//	Function Date :         14/07/2025
//	Function Author :	    Sneha Mohane
//
//////////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;
    int iValue = 6;

    iRet = Factorial(iValue);

    printf("Addition is : %d\n",iRet);

    return 0;
}