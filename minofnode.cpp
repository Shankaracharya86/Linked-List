#include<iostream>
#include<bits/stdc++.h>
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

int min(struct Node*p)
{ 
  int m=INT_MAX;
  while(p!=NULL)
  {
      if(p->data<m)
      {
          m=p->data;
      }p=p->next;
  }return m;
       
}
int main()
{
    int A[]={8,3,73,12,9};
    create(A,5);
    
    cout<<"min is "<<min(first);
}