//////////////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program400.c
//    Description :     Used to calulate addition of first five natural numbers using recursion.
//    Author :          Sneha Mohane
//    Date :            14/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                 

int Addition()
{
    static int  i= 1;
    static int iSum = 0;

    if(i <= 5)
    {
        iSum = iSum + i;
        i++;
        Addition();
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

    iRet = Addition();

    printf("Addition is : %d\n",iRet);

    return 0;
}