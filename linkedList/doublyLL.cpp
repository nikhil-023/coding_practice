#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*prev,*next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};
//insert at beginning
void insertBegin(Node* & head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
    head= temp;    
}
//traversing the DLL
void printList(Node *head)
{
    Node *curr = head;
    cout<<"NULL"<<" ";
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}
//insert at end of DLL
void insertEnd(Node* & head,int data)
{
    Node *temp = new Node(data);
    if(head==NULL)
    {
        head = temp;
        return;
    }
    Node *curr = head;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next=temp;
    temp->prev=curr;    
}
//reverse a DLL
void reverseDLL(Node* & head)
{
    if(head==NULL || head->next==NULL)
        return;
    Node* prev=NULL;
    Node*curr=head;
    while(curr!=NULL)    
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    head=prev->prev;
}
//delete head of DLL
void delHead(Node* &head)
{
    if(head==NULL)
        return;
    if(head->next==NULL) 
    {
        delete head;
        head=NULL;
        return;
    }   
    else
    {
        Node* temp=head;
        head=head->next;
        delete temp;
        head->prev=NULL;
        return;
    }
}
//delete last node of DLL
void delLast(Node* & head)
{
    if(head==NULL)
        return;
    if(head->next==NULL)  
    {
        delete head;
        return ;
    }  
    Node *curr=head;
    while(curr->next->next!=NULL)
        curr=curr->next;
    delete curr->next;
    curr->next=NULL;

}
int main()
{
    Node *head=new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next = temp2;
    temp2->prev = temp1;
    insertBegin(head,5);
    printList(head);
    insertEnd(head,35);
    printList(head);
    reverseDLL(head);
    printList(head);
    delHead(head);
    printList(head);
    delLast(head);
    printList(head);
    return 0;
}