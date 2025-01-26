#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtHead(Node* &head, int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &head,Node* &tail ,int data){
    Node* temp = new Node(data);
    Node* last=head;
    if(head==NULL){
        temp->next=head;
        head=temp;
    }else{
        while(last->next!=NULL){
            last=last->next;
        }
        last->next=temp;
        tail=temp;
    }
}


void InsertAtTailUsingTailPointer(Node* &tail, int data)
{
    Node *temp = new Node(data);
    tail->next=temp;
    tail=tail->next;
}

void InsertAtPosition(Node* &head,int pos,int data){
    Node* temp= head;
    int counter=1;
    while(counter<pos-1){
        temp=temp->next;
        counter++;
    }
    Node* N_Node = new Node(data);
    if (pos == 1){
        N_Node->next=temp;
        head=N_Node;
    }else{
        N_Node->next=temp->next;
        temp->next=N_Node;
    }
}

void ListSize(Node* head){
    int counter =0;
    while(head!=NULL){
        counter+=1;
        head=head->next;
    }
    cout<<counter<<endl;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(33);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,20);
    InsertAtHead(head,43);
    InsertAtHead(head,43);
    InsertAtHead(head,23);
    InsertAtHead(head,240);
    InsertAtTail(head,tail,55);
    InsertAtTailUsingTailPointer(tail,65);//55 is not added as the tail is not updated in the previous line
    print(head);
    ListSize(head);
    InsertAtPosition(head,1,54);
    print(head);
    return 0;
}