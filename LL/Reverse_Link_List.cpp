#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(){
        data=0;
        next=NULL;
    }
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    Node* head;
public:
    List(){
        head=NULL;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
        }else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }
    }
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};

int main(){
    List* ll = new List();
    ll->push_back(1);
    ll->push_back(2);
    ll->push_back(3);
    ll->push_back(4);
    ll->push_back(5);
    ll->printLL();
}