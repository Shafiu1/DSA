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
        }
    }
};


int main(){
    CircularList cll;
}