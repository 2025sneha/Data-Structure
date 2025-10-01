//////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program401.c
//    Description :     Used to calulate factorial of first five natural numbers using recursion.
//    Author :          Sneha Mohane
//    Date :            14/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                 

int Factorial()
{
    static int  i= 1;
    static int iSum = 1;

    if(i <= 5)
    {
        iSum = iSum * i;
        i++;
        Factorial();
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

    iRet = Factorial();

    printf("Factorial is : %d\n",iRet);

    return 0;
}