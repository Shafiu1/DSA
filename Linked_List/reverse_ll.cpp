#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAthead(Node* &head,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
    }else{
        temp->next=head;
        head=temp;
    }
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* reverse(Node* &head){
    
    Node* prev=NULL;
    Node* curr=head;
    Node* forw=NULL;
    while(curr!=NULL){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
    }
    if(head==NULL || head==prev){
        return head;
    }
    return prev;
}
int main() {
    Node* head=NULL;
    insertAthead(head,40);
    insertAthead(head,55);
    insertAthead(head,65);
    insertAthead(head,75);
    print(head);
    head=reverse(head);
    print(head);
    return 0;
}