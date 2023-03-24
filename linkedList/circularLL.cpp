#include<iostream>
using namespace std;
//circular  linked list
struct Node
{
    int data;
    Node* next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};
//traversal of cll-method 1
void printList(Node* &head)
{
    if(head==NULL)
        return;
    cout<<"NULL "<<head->data<<" " ;
    for(Node* p=head->next;p!=head;p=p->next)  
        cout<<p->data<<" "; 
    cout<<"NULL"<<endl;    
}
//traversal of cll-method 2
void printList2(Node* &head)
{
    if(head==NULL)
        return;
    Node*p=head;
    cout << "NULL " ;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    while (p != head);
    cout<<"NULL"<<endl;
}
//insert at begin of cLL-naive approach
void insertBegin(Node* & head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL)
        temp->next=temp;
    else
    {
        Node* curr=head;
        while(curr->next!=head)
            curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }    
    head=temp;
}
// insert at begin of cLL-efficient approach
void insertBegin1(Node* &head,int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    { 
        temp->next=head->next;
        head->next=temp;
        //swap
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
    }    
}
//insert at end of cll-naive approach
void insertEnd(Node* &head,int x)
{
    Node*temp=new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        Node *curr = head;
        while (curr->next != head)
            curr = curr->next;
        curr->next = temp;
        temp->next = head;
    }    
}
//insert node at end-efficient approach
void insertEnd1(Node* &head,int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
        temp->next = temp;
    else
    {
        temp->next=head->next;
        head->next=temp;
        //swap
        int t=temp->data;
        temp->data=head->data;
        head->data=t;
        head=temp;
    }    
}
//delete head of CLL-naive approach
void delHead(Node*& head)
{
    if(head==NULL)
        return;
    if(head->next==head)
    {
        delete head;
        return;
    }  
    Node* curr=head;
    while(curr->next!=head)  
        curr=curr->next;
    curr->next=head->next;
    delete head;
    head=curr->next;      
}
// delete head of CLL-efficient approach
void delHead1(Node*& head)
{
    if (head == NULL)
        return;
    if (head->next == head)
    {
        delete head;
        return;
    }
    head->data=head->next->data;
    Node* temp=head->next;
    head->next=head->next->next;
    delete temp;
}
//delete Kth node from cll
void deletekth(Node*& head,int k)
{
    if (head == NULL)
        return;
    if(k==1)   
        return delHead(head) ;
    Node* curr=head;
    for(int i=0;i<k-2;i++)    
        curr=curr->next;
    Node* temp=curr->next;
    curr->next = curr->next->next;
    delete temp;

}
int main()
{
    Node *head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head;

    printList(head);
    printList2(head);
    insertBegin(head,5);
    printList(head);
    insertBegin1(head,3);
    printList(head);
    insertEnd(head,50);
    insertEnd1(head,60);
    printList(head);
    delHead(head);
    printList(head);
    delHead1(head);
    printList(head);
    deletekth(head,4);
    printList(head);
    return 0;
}