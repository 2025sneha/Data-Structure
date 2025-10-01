#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node *next;
};

class StackX
{
    private :
       struct node *first;
       int iCount;


    public:
       StackX();
       void push(int);
       int pop();
       void Display();
       int Count();
           
};

StackX :: StackX()
{
   first = NULL;
   iCount = 0;
}

void StackX :: push(int no)    //InsertFirst
{
   struct node * newn = NULL;

   newn  = new node;

   newn->data = no;
   newn->next = NULL;

   newn->next = first;
   first = newn;

   iCount++;

}

int StackX :: pop()           //DeleteFirst
{ 
   struct node  *temp = NULL; 
   int value = 0;

   if(first == NULL)
   {
      cout<<"Unable to pop as stack is empty \n";
      return NULL;
   }
   else 
   {
      temp = first;
      value = temp ->data;

      first = first->next;
      delete temp;

      iCount--;

      return value;
   }
}

void StackX :: Display()
{
   struct node *temp = NULL;

   temp = first;

   while (temp != NULL)
   {
      cout<<"| "<<temp->data<<" |-";
      temp = temp->next;
   }
   cout<<"\n";
   
}

int StackX :: Count()
{
   return iCount;
}
int main()
{
   StackX * sobj = new StackX();
   int iRet = 0;

   sobj->push(51);
   sobj->push(21);
   sobj->push(11);

   sobj->Display();
   iRet = sobj->Count();

   cout<<"Number of elements from the stack : "<<iRet<<"\n";

   iRet = sobj->pop();
   cout<<"poped element is : "<<iRet<<"\n";

   iRet = sobj->pop();
   cout<<"poped element is : "<<iRet<<"\n";   

   sobj->Display();

   iRet = sobj->Count();

   cout<<"Number of elements from the stack : "<<iRet<<"\n";

   delete sobj;
    
   return 0;
}