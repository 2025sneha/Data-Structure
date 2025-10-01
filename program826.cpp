///////////////////////////////////////////////////////////////////////////////////
//
//    Header file inclusion 
//
//////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////
//
//  Class :         Doubly Circular Linked list
//  Description :   Generic implementation of doubly circular linked list
//  Author :        Sneha Mothabhau Mohane
//
/////////////////////////////////////////////////////////////////////////////////

struct DoublyCLLnode
{
    int data;
    struct DoublyCLLnode *next;
    struct DoublyCLLnode *prev;
};

class DoublyCLL
{
    private:
        struct DoublyCLLnode * first;
        struct DoublyCLLnode * last;
        int iCount;

    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);
        
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyCLL :: DoublyCLL()
{
    cout<<"Inside Constructor\n";
    
    first = NULL;
    last = NULL;
    iCount = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertFirst
//    Description :     Used to insert node at first position.
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: InsertFirst(
                                int no
                             )
{
    struct DoublyCLLnode * newn = NULL;

    newn = new struct DoublyCLLnode;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)   // LL is empty
    {
        first = newn;
        last = newn;
    }   
    else    // LL contains atleast one node
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
    } 

    last->next = first;
    first->prev = last;

    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertLast
//    Description :     Used to insert node at last position.
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: InsertLast(
                                int no
                            )
{
    struct DoublyCLLnode * newn = NULL;

    newn = new struct DoublyCLLnode;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)   // LL is empty
    {
        first = newn;
        last = newn;
    }   
    else    // LL contains atleast one node
    {
        last->next = newn;
        newn->prev = last;

        last = newn;
    } 

    last->next = first;
    first->prev = last;
    
    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Display
//    Description :     Used to display all nodes on screen
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: Display()
{
    struct DoublyCLLnode * temp = NULL;
    cout<<"Elements of the LinkedList are : \n";

    temp = first;

    if(first == NULL && last == NULL)
    {
        cout<<"LinkedList is empty\n";
        return;
    }

    do
    {
        cout<<"| "<< temp->data <<" | <=> ";
        temp = temp->next;   
    } while (temp != first);
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Count
//    Description :     Used to count all nodes 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

int DoublyCLL :: Count()
{
    return iCount;  
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeleteFirst
//    Description :     Used to delete node of first position 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: DeleteFirst()
{
    if(first == NULL && last == NULL)   // LL is empty
    {
        return;
    }
    else if(first == last)  // LL contains 1 node
    {
        delete first;
    
        first = NULL;
        last = NULL;
    }
    else    // LL contains more than 1 nodes
    {
        first = first -> next;
        delete first->prev;     // delete last->next;

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeleteLast
//    Description :     Used to Delete node of last position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: DeleteLast()
{
    if(first == NULL && last == NULL)   // LL is empty
    {
        return;
    }
    else if(first == last)  // LL contains 1 node
    {
        delete last;
    
        first = NULL;
        last = NULL;
    }
    else    // LL contains more than 1 nodes
    {
        last = last -> prev;
        delete last->next;

        last->next = first;
        first->prev = last;
    }

    iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertAtPos
//    Description :     Used to insert node at speicific position 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: InsertAtPos(
                                int no, 
                                int pos
                            
                            )
{
    struct DoublyCLLnode * temp = NULL;
    struct DoublyCLLnode * newn = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount+1)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new struct DoublyCLLnode;
        
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeletetAtPos
//    Description :     Used to Delete node at speicific position 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

void DoublyCLL :: DeleteAtPos(
                                int pos
                             )
{
    struct DoublyCLLnode * temp = NULL;

    int iCnt = 0;

    if(pos < 1 || pos > iCount)
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }
}

////////////////////////////////////////////////////////////////////////////
//
//    Entry point function (main)
//
/////////////////////////////////////////////////////////////////////////

int main()
{
    DoublyCLL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    
    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.InsertAtPos(105,5);
    
    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";

    dobj.DeleteAtPos(5);
    
    dobj.Display();
    iRet = dobj.Count();

    cout<<"Number of elements are : "<<iRet<<"\n";


    return 0;
}