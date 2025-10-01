////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program396.c
//    Description :     Used to display jay ganesh using recursion on console
//    Author :          Sneha Mohane
//    Date :            14/07/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    static int i = 0;

    printf("Jay Ganesh... : %d \n",i);

    i++;
    
    Display();

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
    Display();

    return 0;
}