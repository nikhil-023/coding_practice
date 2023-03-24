#include<iostream>
using namespace std;
//user defined linked list
struct Node
{
    int data;
    Node* next;
    Node(int value){//constructor
        data=value;
        next=NULL;
    }
};
//traversing a singly ll -1
void printList(Node* head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
// traversing a singly ll -2
void printList1(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout << "NULL" << endl;
}
//recursive Traversal
void rPrint(Node* head)
{
    if(head==NULL)
        return;
    cout<<head->data<<" ";
    rPrint(head->next) ;
}
//insert at beginning of LL
void insertBegin(Node *& head,int x)
{
    Node* new_node=new Node(x);
    new_node->next=head;
    head=new_node;
}
//insert at end of LL
void insertEnd(Node*& head,int x)
{
    Node* new_node=new Node(x);
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    Node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=new_node;
}
//insert after the given Node
void insertAfter(Node*& head,int key,int val)
{
    Node *n =new Node(val);
    if(key==head->data)
    {
        n->next=head->next;
        head->next=n;
        return;
    }
    Node *curr=head;
    while (curr->data!= key)
    {
        curr = curr->next;
        if(curr==NULL)
            return;
    }
    n->next=curr->next;
    curr->next=n;
}
//delete first node in LL
void delHead(Node*& head)
{
    if(head==NULL)
        return ;
    Node* temp=head->next;
    delete head;
    head=temp;
}
//delete last node in LL
void delLast(Node*& head)
{
    if(head==NULL)
        return ;
    if(head->next==NULL)   
    {
        delete head;
        return;
    } 
    Node *curr=head;
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete curr->next ;
    curr->next=NULL;  
}
//searching in a LL
int searchIt(Node* & head,int key)
{
    int pos=1;
    Node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==key)
            return pos;
        else{
            pos++;
            curr=curr->next;
        }    
    }
    return -1;
}
//recursive search
int searchRec(Node* &head,int key)
{
    if(head==NULL)
        return -1;
    if(head->data==key)    
        return 1;
    else
    {
        int res=searchRec(head->next,key);
        if(res==-1)
            return -1;
        else
            return res+1;    
    }
}
int main()
{ 
    Node* head=new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next=temp1;
    temp1->next=temp2;
    printList(head);
    cout<<endl;
    printList1(head);
    cout << endl;
    rPrint(head);
    cout << endl;
    insertBegin(head,40);
    printList1(head);
    insertEnd(head,50);
    cout << endl;
    printList1(head);
    insertAfter(head,20,25);
    cout << endl;
    printList1(head);
    delHead(head);
    printList(head);
    delLast(head);
    printList(head);
    cout<<searchIt(head,25)<<endl;
    cout<<searchRec(head,25)<<endl;

    return 0;
}