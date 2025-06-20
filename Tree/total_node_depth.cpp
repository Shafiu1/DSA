#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int a)
    {
        value = a;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root){
    if(root==nullptr)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1+max(lh,rh);
}

int countNodes(Node* root){
    if(root==nullptr)
        return 0;
    return 1+countNodes(root->left)+countNodes(root->right);
}

int countLeafNodes(Node* root){
    if(root==nullptr)
        return 0;
    if(root->left==nullptr && root->right==nullptr)
        return 1;
    return countLeafNodes(root->left)+countLeafNodes(root->right);
}

bool isIdentical(Node* a,Node* b){
    if(a==nullptr && b==nullptr)
        return true;
    if(a==nullptr || b==nullptr)
        return false;
    return (a->value==b->value) && isIdentical(a->left,b->left) && isIdentical(a->right,b->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout<<height(root)<<endl;
    cout<<countNodes(root)<<endl;
    cout<<countLeafNodes(root)<<endl;
    return 0;
}