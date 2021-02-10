#include<bits/stdc++.h>
using namespace std;
// geeksforgeeks
// bst to min-heap
struct Node{
int data;
Node* left;
Node* right;
};

Node* getNode(int key)
{
    Node* newnode=new Node;
    newnode->data=key;
    newnode->left=NULL;
    newnode->right=NULL;

    return newnode;
}

void inorder(Node *root,vector<int>& ans)
{
    if(!root)
    {
        return;
    }
    inorder(root->left, ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}

void converttomin(Node *root,vector<int> ans,int *i)
{
    if(root==NULL)
    {
        return;
    }

    root->data=ans[++*i];
    converttomin(root->left,ans,i);
    converttomin(root->right,ans,i);
}

void bsttominheap(Node *root)
{
    vector<int> ans;
    int i=-1;

    inorder(root,ans);
    converttomin(root,ans,&i);
}

void preorder(Node *root)
{
    if(!root)
    {
        return;
    }
    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root = getNode(4);
    root->left = getNode(2);
    root->right = getNode(6);
    root->left->left = getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);

    bsttominheap(root);
    cout<<"Predorder traversal";
    preorder(root);

    return 0;
}
