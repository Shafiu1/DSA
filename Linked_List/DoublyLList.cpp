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
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            cout<<"Kire"<<endl;
            delete next;
            next=NULL;
        }
        cout<<"memory free for with node data: "<<val<<endl;
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
int getLength(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

//insert at head..
void insertAtHead(Node* &head, Node* &tail,int data)
{
    Node *temp = new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
}
//insert at tail
void insertAtTail(Node* &head,Node* &tail, int data){
    
    Node* temp= new Node(data);
    if (tail == NULL){
        tail=temp;
        head=temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPos(Node* &head,Node* &tail,int position, int data){
    if(position==1){
        insertAtHead(head,tail,data);
        return;
    }
    if(position>getLength(head)){
        insertAtTail(head,tail,data);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    Node* nodeToInsert= new Node(data);
    nodeToInsert->next=temp->next;
    nodeToInsert->prev=temp;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
}

void deleteAtHead(Node* &head,Node* &tail){
    if(head==NULL){
        cout<<"The list is empty"<<endl;
        return;
    }
    else if(head==tail){
        Node* temp=head;
        head=NULL;
        tail==NULL;
        delete temp;
    }else{
        Node* temp =head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;//Don't know if it is necessary or not..
        delete temp;
    }
}


int main(){
    // Node* node1= new Node(11);
    Node* head=NULL;
    Node* tail=NULL;
    // print(head);
    // cout<<getLength(head)<<endl;
    // cout<<(*head).next<<endl;
    insertAtHead(head,tail,22);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    insertAtHead(head,tail,33);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    insertAtHead(head,tail,44);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    insertAtHead(head,tail,55);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    print(head);
    insertAtTail(head,tail,66);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    print(head);
    // cout<<tail->data<<endl;

    insertAtPos(head,tail,7,77);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    print(head);
    insertAtPos(head,tail,1,88);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    print(head);
    insertAtPos(head,tail,3,99);
    cout<<"head-->"<<head->data<<endl;
    cout<<"tail-->"<<tail->data<<endl;
    print(head);
    deleteAtHead(head,tail);
    print(head);
}