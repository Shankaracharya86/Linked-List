#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node*next;
}
*first = NULL;
void create(int A[],int n)
{
     
    int i;
    struct node *temp;
    node *last;         
    first=new node;
    first->data=A[0];          
    first->next=NULL;         
    last=first;
    for(i=1;i<n;i++)
    {
       temp=new node;
       temp->data=A[i];
       temp->next=NULL;
       last->next=temp;
       last=temp;
    }
}
struct node*move(struct node*p,int key)
{
    node *q=NULL;
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
void display(struct node*p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    int A[]={2,4,6,8,12,18};
    create(A,6);

    move(first,12);
    display(first);
}