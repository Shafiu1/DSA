#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAthead(Node *&head, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *reverse(Node *&head, int left, int right)
{
    if(left==right){
        return head;
    }
    Node *prev = NULL;
    Node *curr = NULL;
    Node *forw = NULL;
    Node *temp = head;
    int cnt=1;
    while(cnt<left-1){
        cnt++;
        temp=temp->next;
    }
    if(left==1){
        prev=NULL;
        curr=head;
    }else{
        prev=temp;
        curr=prev->next;
    }
    cnt++;
    while(cnt<=right){
            forw=curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        curr->next=forw;
        if(left==1)
            return prev;
        else
            return head;
}
int main()
{
    Node *head = NULL;
    insertAthead(head, 40);
    insertAthead(head, 55);
    insertAthead(head, 65);
    insertAthead(head, 75);
    insertAthead(head, 87);
    print(head);
    head = reverse(head,2,4);
    print(head);
    return 0;
}