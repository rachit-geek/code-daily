#include<bits/stdc++.h>
using namespace std;
// insert a node in a tree
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* CreateNode(int val)
{
    Node* newnode= new Node();
    if(!newnode)
    {
        cout<<"Memory Error";
        return NULL;
    }
     newnode->data=val;
     newnode->left=NULL;
     newnode->right=NULL;

}

Node* insert(Node* root,int key)
{
    if(root==NULL)
    {
        root=CreateNode(key);
        return root;
    }

    queue<Node*> q ;
    q.push(root);

    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();

        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        else

        {
            temp->left=CreateNode(key);
            return root;
        }

        if(temp->right!=NULL)
        {
            q.push(temp->right);
        }
        else

        {
            temp->right=CreateNode(key);
            return root;
        }

    }


}

void inorder(Node* temp)
{
    if(temp==NULL)
    {
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<' ';
    inorder(temp->right);
}


int main()
{
    Node* root = CreateNode(10);
    root->left = CreateNode(11);
    root->left->left = CreateNode(7);
    root->right = CreateNode(9);
    root->right->left = CreateNode(15);
    root->right->right = CreateNode(8);

    inorder(root);
    cout<<endl;

    int key=12;
    root=insert(root,key);

    inorder(root);
    cout<<endl;

    return 0;
}
