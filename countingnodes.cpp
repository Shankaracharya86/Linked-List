#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node*next;
}
*first = NULL;

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

int count(struct Node*p)
{
    int c=0;
    while(p!=NULL)
    {
         c++;
         p=p->next;
    }cout<<c;
    return 0;
}
int main()
{
    int A[]={8,3,7,12,9};
    create(A,5);
    
    count(first);
}