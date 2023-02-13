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
