#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with the data: "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int data){
    //assuming the element is present in the list..
    Node* dummy = tail;
    Node* temp = new Node(data);
    if(tail==NULL){
        tail=temp;
        temp->next=tail;
    }else{
        while(dummy->data!=element){
            dummy=dummy->next;
        }
        temp->next=dummy->next;
        dummy->next =temp;
    }
}

void print(Node* tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=tail;
    cout<<tail->data<<" ";
    tail=tail->next;
    while(tail!=temp){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"This list is an empty list.So, no need to delete the element";
        return;
    }
    else if(tail->next==tail){
        Node* curr= tail;
        tail=NULL;
        curr->next=NULL;
        delete curr;
        cout<<"Last element deleted"<<endl;
        return;
    }else{
        Node *prev = tail;
        Node *curr = tail->next;
        // Node* repeat_check=curr;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
            // if (prev == repeat_check)
            // {
            //     cout << "The element is not in the list";
            //     return;
            // }
        }
        prev->next=curr->next;
        if(curr==tail){
            tail=curr->next;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main() {
    Node* tail=NULL;
    insertNode(tail,4,5);//At first node element has no value..it will be skiped.
    // cout<<tail->data<<" ";
    insertNode(tail,5,10);
    insertNode(tail,10,15);
    insertNode(tail,15,20);
    print(tail);
    // deleteNode(tail,5);
    // print(tail);
    // // deleteNode(tail,51);
    // // print(tail);
    // deleteNode(tail,10);
    // print(tail);
    // deleteNode(tail,15);
    // print(tail);
    deleteNode(tail,10);
    print(tail);
    // deleteNode(tail,20);
    // print(tail);
    return 0;
}