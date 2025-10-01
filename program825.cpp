///////////////////////////////////////////////////////////////////////////////////
//
//    Header file inclusion 
//
//////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////
//
//  Class :         QueueX
//  Description :   Generic implementation of queue
//  Author :        Sneha Mothabhau Mohane
//
/////////////////////////////////////////////////////////////////////////////////

template <class T>
struct Queuenode
{
    T data;
    struct Queuenode<T> *next;
};

template <class T>
class QueueX
{
    private:
        struct Queuenode<T> *first;
        int iCount;

    public:
        QueueX();
        void Enqueue(T);
        T Dequeue();
        void Display();
        int Count();
};

template <class T>
QueueX<T> :: QueueX()
{
    first = NULL;
    iCount = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Enqueue
//    Description :     Used to insert node at last position.
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void QueueX<T> :: Enqueue(T no) // InsertLast
{
    struct Queuenode<T> *temp = NULL;
    struct Queuenode<T> * newn = NULL;

    newn = new Queuenode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Dequeue
//    Description :     Used to delete first node.
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
T QueueX<T> :: Dequeue()         // DeleteFirst
{
    struct Queuenode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to remove as queue is empty\n";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first -> next;
        delete temp;

        iCount--;

        return value;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Display
//    Description :     Used to display all nodes on screen
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void QueueX<T> :: Display()
{
    struct Queuenode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Count
//    Description :     Used to count the nodes.
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int QueueX<T> :: Count()
{
    return iCount;
}

///////////////////////////////////////////////////////////////////////
//
//  Class :         StackX
//  Description :   Generic implementation of stack
//  Author :        Sneha Mothabhau Mohane
//
///////////////////////////////////////////////////////////////////////

template<class T>
struct Stacknode
{
    T data;
    struct Stacknode<T> *next;
};

template<class T>
class StackX
{
    private:
        struct Stacknode<T> *first;
        int iCount;

    public:
        StackX();
        void Push(T);
        T Pop();
        void Display();
        int Count();
};

template<class T>
StackX<T> :: StackX()
{
    first = NULL;
    iCount = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Push
//    Description :     Used to insert node at first poistion
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void StackX<T> :: Push(T no) // InsertFirst
{
    struct Stacknode<T> * newn = NULL;

    newn = new Stacknode<T>;

    newn->data = no;
    newn->next = NULL;

    newn->next = first;
    first = newn;

    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Pop
//    Description :     Used to delete element of first position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
T StackX<T> :: Pop()         // DeleteFirst
{
    struct Stacknode<T> *temp = NULL;
    T value;

    if(first == NULL)
    {
        cout<<"Unable to pop as stack is empty\n";
        return NULL;
    }
    else
    {
        temp = first;
        value = temp->data;

        first = first -> next;
        delete temp;

        iCount--;

        return value;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Display
//    Description :     Used to display the all nodes screen
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void StackX<T> :: Display()
{
    struct Stacknode<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |-";
        temp = temp->next;
    }
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Count
//    Description :     Used to count the nodes 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int StackX<T> :: Count()
{
    return iCount;
}

////////////////////////////////////////////////////////////////////////////////
//
//  Class :         SinglyCLL
//  Description :   Generic implementation of singly circular linked list
//  Author :        Sneha Mothabhau Mohane
//
/////////////////////////////////////////////////////////////////////////////////

template <class T>
struct SinglyCLLnode
{
    T data;
    struct SinglyCLLnode<T> *next;
};

template <class T>
class SinglyCLL
{
    private:
        struct SinglyCLLnode<T> * first;
        struct SinglyCLLnode<T> * last;
        int iCount;

    public:
        SinglyCLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void DeleteFirst();
        void DeleteLast();
        void Display();
        int Count();
        void DeleteAtPos(int pos);
        void InsertAtPos(T no, int pos);
};

template <class T>
SinglyCLL<T>::SinglyCLL()                   // default constrctor
{
    cout<<"Inside constructor of SinglyCLL\n";

    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertFirst
//    Description :     Used to insert node at first position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::InsertFirst(
                                T no
                              )
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)   // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        newn->next = first;
        first = newn;

        last->next = first;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertLast
//    Description :     Used to insert node at last position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::InsertLast(
                                T no
                             )
{
    struct SinglyCLLnode<T> * newn = NULL;

    newn = new struct SinglyCLLnode<T>;

    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)   // if(iCount == 0)
    {
        first = newn;
        last = newn;

        last->next = first;
    }
    else
    {
        last->next = newn;
        last = newn;

        last->next = first;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeleteFirst
//    Description :     Used to delete node at first position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        first = first -> next;
        delete last->next;

        last->next = first;
    }
    iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeleteLast
//    Description :     Used to delete node at last position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::DeleteLast()
{
    struct SinglyCLLnode<T> * temp = NULL;

    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;

        first = NULL;
        last = NULL;
    }
    else
    {
        temp = first;

        while(temp -> next != last)
        {
            temp = temp -> next;
        }

        delete last;
        last = temp;

        last->next = first;
    }
    iCount--;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Display
//    Description :     Used to display all nodes on screen
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct SinglyCLLnode<T> * temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp -> next;
    } while (temp != last ->next);
    
    cout<<"\n";
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   Count
//    Description :     Used to count the all nodes 
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCLL<T>::Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   DeleteAtPos
//    Description :     Used to delete node of specific position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::DeleteAtPos(
                                int pos
                              )
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * target = NULL;
    
    int i = 0;
    
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

        for(i = 1; i < pos-1; i++)
        {
            temp = temp -> next;
        }

        target = temp -> next;

        temp->next = target->next;
        delete target;

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function name :   InsertAtPos
//    Description :     Used to insert node specific position
//    Author :          Sneha Mohane
//    Date :            18/09/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCLL<T>::InsertAtPos(
                                T no, 
                                int pos
                              )
{
    struct SinglyCLLnode<T> * temp = NULL;
    struct SinglyCLLnode<T> * newn = NULL;

    int i = 0;

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
        newn = new struct SinglyCLLnode<T>;

        newn->data = no;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < pos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp->next = newn;

        iCount++;
    }
}

int main()
{
    
    return 0;
}