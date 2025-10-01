////////////////////////////////////////////////////////////////////////////////////
//
//    File name :       program398.c
//    Description :     Used to display jay ganesh using recursion on console
//    Author :          Sneha Mohane
//    Date :            14/07/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                   

void Display()
{
    static int i = 1;

    if(i <= 3)
    {
        printf("Jay Ganesh... : %d \n",i);
        i++; 
        Display();
    }
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
    printf("End of main\n");

    return 0;
}