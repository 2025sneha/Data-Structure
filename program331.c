#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
   struct node *prev;       //$
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{

}

int Count(PNODE first)
{
    return 0;
}

void InsertFirst(PNODE first, int no)
{

}
void InsertLast(PNODE first, int no)
{
    
}
void InsertAtPos(PNODE first, int no, int pos)
{
    
}
void DeleteFirst(PNODE first)
{
    
}
void DeleteLast(PNODE first)
{
    
}
void DeleteAtPos(PNODE first, int no, int pos)
{
    
}
int main()
{
    PNODE head = NULL;

    return 0;
}