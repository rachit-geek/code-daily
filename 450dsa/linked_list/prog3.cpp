#include<bits/stdc++.h.
using namespace std;
class Node{
    int data;
    Node* next;
};
void removeduplicates(Node* head)
{
    if(head==NULL or head->next==NULL) // if list is empty or it has only one element
    {
        return ;
    }
    Node* curr=head;
    Node* next_next=NULL;
    while(curr!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            next_next=curr->next;
            free(curr->next);
            curr->next=next_next;
        }
        else
        {
            curr=curr->next;
        }
    }
}
void push(Node** head_ref,int value);
{
    Node* newnode= new Node();
    newnode->data=value;
    newnode->next=*head_ref;
    *head_ref=newnode;
}
void printList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
     push(&head, 20);
    push(&head, 13);
    push(&head, 13);
    push(&head, 11);
    push(&head, 11);
    push(&head, 11); 

    cout<<"Initialy the Linked List is:";
    printList(head);

    removeduplicates(head);
    
    cout<<"After removing duplicates";
    printList(head);
}