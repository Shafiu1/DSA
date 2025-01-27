#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


//insert at tail
void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}



//length of doubly linked list.. 
int getLength(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
int main(){
    Node* node1= new Node(11);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;
    // cout<<(*head).next<<endl;
    insertAtHead(head,22);
    insertAtHead(head,33);
    insertAtHead(head,44);
    insertAtHead(head,55);
    print(head);
    insertAtTail(tail,66);
    print(head);
    cout<<tail->data<<endl;
}