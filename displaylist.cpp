#include<iostream>
using namespace std;

struct Node
{
    int data ;         //data type of node
    struct Node *next; //head node is a pointer which holds the address of next node
}
*first = NULL;  //global variable pointer which use anywhere in the program

void create(int A[],int n)
{  
    int i;                    //i is for initializing the array i.e. A[i]
    struct Node *temp;        //this is temporary pointer..this helps to create a new node..this is taken because we don't want to disturb the original pointer
    struct Node *last;         //this pointer helps to add a new node at the end of the linked list
    first=new Node;
    first->data=A[0];          //As the first node is null so we 
    first->next=NULL;         //
    last=first;
    for(i=1;i<n;i++)
    {
       temp=new Node;
       temp->data=A[i];
       temp->next=NULL;
       last->next=temp;
       last=temp;
    }
}
  
void display(struct Node *p)
{
    while(p!=NULL)
    { 
       cout<<p->data<<" ";
       p=p->next;
    }
}
int main()
{
    int A[]={2,3,4,5,6,7,8,9};
    create(A,8);

    display(first);
    return 0;

}