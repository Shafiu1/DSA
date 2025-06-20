#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* left;
    Node* right;

    Node(int a){
        value=a;
        left=nullptr;
        right=nullptr;
    }

};

void inorder(Node* node){
    if(node==nullptr)
        return;
    inorder(node->left);
    cout<<node->value<<" ";
    inorder(node->right);
}
void preorder(Node *node)
{
    if (node == nullptr)
        return;
    cout << node->value << " ";
    preorder(node->left);
    preorder(node->right);
}
void postorder(Node *node)
{
    if (node == nullptr)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->value << " ";
}

void levelOrder(Node* node){
    if(node==nullptr){
        return;
    }
    queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        cout<<curr->value<<" ";
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
}
int main() {
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"\nInorder Traversal"<<endl;
    inorder(root);
    cout<<"\nPreOrder Traversal"<<endl;
    preorder(root);
    cout<<"\nPost order Traversal"<<endl;
    postorder(root);
    cout<<"\nLever Order Traversal"<<endl;
    levelOrder(root);
    return 0;
}