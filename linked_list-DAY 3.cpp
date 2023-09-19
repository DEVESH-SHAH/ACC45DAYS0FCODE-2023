#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(int d,Node* &head)
{
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtEnd(int d,Node* &tail)
{
    Node* end=new Node(d);
    tail->next=end;
    tail=tail->next;
}
void insertAtposition(int pos,int d,Node* &head,Node* &tail)
{
    if(pos==1)
    {
        insertAtHead(d,head);
    }
    else{
    Node* posi=new Node(d);
    Node* temp=head;
    if(temp->next==NULL)
    {
        insertAtEnd(d,tail);
    }
    int n=1;
    while(n!=pos-1)
    {
        temp=temp->next;
        n++;
    }
    posi->next=temp->next;
    temp->next=posi;}
}
void printlink(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next; 
    }
}
int main()
{
    Node* head=new Node(10);
    Node *tail=head;
    insertAtEnd(14,tail);
    insertAtEnd(16,tail);
    insertAtEnd(17,tail);
    insertAtposition(1,15,head,tail);
    printlink(head);
}   