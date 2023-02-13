#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
}
*first=NULL;
int Insertsorted(struct node*p,int x)
{
    struct node*t=new node;
     t->data=x;
     t->next=NULL;
    struct node*q=NULL;

    if(first==NULL)
      first=t;
    else
    {
       while(p && p->data < x)
      {
          q=p;
          p=p->next;
      }
      if(p==first)
      {
          t->next=first;
          first=t;
      }
      else
      {
         t->next=q->next;
         q->next=t;
      }
    }
}
void display(struct node*d)
{
    cout<<" "<<d->data;
    d=d->next;
}

int main()
{
    int n;
    cout<<"Enter element ";cin>>n;
    Insertsorted(first,n);
    display(first);
    return 0;
}