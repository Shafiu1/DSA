#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head=tail=NULL;
    }

    void insertHead(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }
    void insertTail(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }else{
            tail->next=newNode;
            tail=newNode;
            tail->next=head;
        }
    }

    void deleteHead(){
        if(head==NULL){
            cout<<"The list is already empty"<<endl;
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=head;
            head=head->next;
            tail->next=head;
            delete temp;
        }
    }

    void deleteTail(){
        if(head==NULL){
            cout<<"The list is already empty"<<endl;
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* curr=head;
            Node* temp=tail;
            while(curr->next!=tail){
                curr=curr->next;
            }
            tail=curr;
            tail->next=head;
            delete temp;
        }
    }

    void print(){
        if(head==NULL) return;
        cout<<head->data<<"->";
        Node* temp=head->next;
        while(temp!=head){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
};


int main(){
    CircularList cll;
    cll.insertHead(23);
    cll.insertHead(3);
    cll.insertHead(2);
    cll.insertTail(4);
    cll.print();
    // cll.deleteHead();
    // cll.print();
    // cll.deleteHead();
    // cll.print();
    // cll.deleteHead();
    // cll.print();
    // cll.deleteHead();
    // cll.print();
    // cll.deleteHead();
    // cll.print();
    cll.deleteTail();
    cll.print();
    cll.deleteTail();
    cll.print();
    cll.deleteTail();
    cll.print();
    cll.deleteTail();
    cll.print();
    cll.deleteTail();
    cll.print();
}