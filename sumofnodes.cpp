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

int add(struct Node*p)
{ 
    int sum=0;
    while(p!=NULL)
    { 
       sum=sum + p->data;
       p=p->next;
    }return sum;
       
}
int main()
{
    int A[]={8,3,7,12,9};
    create(A,5);
    
    cout<<"sum is "<<add(first);
}