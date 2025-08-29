#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    //constructor
    Node(int val){
        data = val;
        next=NULL;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void printLL(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        Node* temp=head;
        if(head==NULL){
            cout<<"The list is empty";
            return;
        }
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    void pop_back(){
        Node *temp = head;
        if (head == NULL)
        {
            cout << "The list is empty";
            return;
        }
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }

    void insert(int val,int pos){
        if(pos<0)
            return;
        if(pos==0){
            push_front(val);
            return;
        }
        Node* newNode= new Node(val);
        Node* temp = head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"Invalid position";
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return;
    }

    int  search(int val){
        Node* temp = head;
        int index=0;
        while(temp!=NULL){
            if(temp->data==val)
                return index;
            temp=temp->next;
            index++;
        }
        return -1;
    }
};

int main(){
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_back(0);
    ll.pop_front();
    ll.printLL();
    ll.pop_back();
    ll.printLL();
    ll.insert(4,1);
    ll.printLL();
    cout<<ll.search(2)<<endl;
    cout<<ll.search(5)<<endl;
}