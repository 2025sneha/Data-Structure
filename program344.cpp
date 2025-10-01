#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

class SinglyCLL
{
    private:                //characteristics are abstracted
        PNODE first; 
        PNODE last;
        int iCount;

    public:             //behaviours
        SinglyCLL()
        {}

        void InsertFirst(int no)
        {}

        void InsertLast(int no)
        {}

        void InsertAtPos(int no, int pos)
        {}

        void DeleteFirst()
        {}
        
        DeleteLast()
        {}

        DeleteAtPos()
        {}

        void Display()
        {}

        int Count()
        {
            return iCount;
        }
};

int main()
{
    SinglyCLL sobj;
    
    return 0;
}