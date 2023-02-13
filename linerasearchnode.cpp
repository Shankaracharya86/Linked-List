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
     
    int i;
    struct Node *temp;
    Node *last;         
    first=new Node;
    first->data=A[0];          
    first->next=NULL;         
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

struct Node*search(struct Node*p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p; 
        }
       p=p->next;
    }
}
//This is for improve searching in linked list i.e. Move a middle node to head node
struct Node*move(struct Node*p,int key)
{
    Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
           q->next=p->next;
           p->next=first;
           first=p;
        }
        q=p;
        p=p->next;
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
    
    int A[]={2,4,6,8,12,17};
    create(A,6);
    display(first);
    cout<<endl;
    move(first,17);
    display(first);
}