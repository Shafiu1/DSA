#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
        data=val;
        next=prev=NULL;
    }
};

class Doubly_List{
    Node* head;
    Node* tail;
public:
    Doubly_List(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout<<"the list is empty\n";
            return;
        }
        Node* temp=head;
        head=head->next;
        if(head!=NULL)
            head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        if(tail==NULL){
            cout<<"the doubly linked list is already empty";
            return;
        }
        Node* temp=tail;
        tail=tail->prev;
        if(tail!=NULL);
            tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }

    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"<==>";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};

int main(){
    Doubly_List  dll;
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);

    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.print();
    dll.pop_front();
    dll.pop_front();
    dll.print();
    dll.pop_back();
    dll.print();
}