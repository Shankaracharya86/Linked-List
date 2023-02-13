#include <iostream>
using namespace std;
struct node
 {
     int data;
     struct node*next;
 }
 *first=NULL;
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
int count(struct node*o)
{
    int c=0;
    while(o!=NULL)
    {
         c++;
         o=o->next;
    }
    return c;
    
}

void display(struct node*d)
{
    while(d!=NULL)
    {
     cout<<" "<<d->data;
     d=d->next;
    }
    cout<<endl;
}

int insert(struct node*p,int index,int x)
{
    struct node*t=new node;
    t->data=x;
    
    if(index < 0 || index > count(p))
       {
           cout<<"invalid";
           return 0;
       }
    else if(index == 0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
            t->next = p->next;
            p->next=t;
            return 0;
        }
    }
}
int main()
{
    int a,b,n;
    int A[100];
    cout<<"Enter the number of node in list ";cin>>n;
    cout<<"Enter the elements of list "<<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    create(A,n);

    cout<<"Enter position of insertion ";cin>>a;cout<<endl;
    cout<<"Enter the element of new node ";cin>>b;cout<<endl;
    display(first);
    count(first);
    insert(first,a,b);
    display(first);
    return 0;
}
