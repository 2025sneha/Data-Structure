//singly linear linked list
// | 11 |->| 21 |->|51|->|101|->NULL

#include<stdio.h>

struct node
{
    int data;
    struct node *next;  //self refrential structure
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main()
{
    struct node *head = NULL;


    return 0;
}