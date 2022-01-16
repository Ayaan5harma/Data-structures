#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node {
    
    int data;
    struct node *left;
    struct node *right;

 node(int val)
    {
        val=data;
        left=NULL;
        right=NULL;

    }
};

int height( node *root)
{
    if(root==NULL)
    {
        return 0;
    }
int leftheight=height(root->left);
int rightheight=height(root->right);
return max(leftheight,rightheight)+1;
}
bool isbalanced(struct node *root)
{
    if(root==NULL)
    {
        return true;
    }
    if(isbalanced(root->left)==false)
    {
        return false;
    }
    if(isbalanced(root->right)==false)
    {
        return false;
    }

int leftheight=height(root->left);
int rightheight=height(root->right);

if(abs(leftheight-rightheight)<=1)
{
       return true;
}
else{
    return false;
}

}
int main()
{
    struct node * root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(6);
    root->left->right =new node(8);
 if(isbalanced(root)==true)
 {
     cout<<"balanced"<<endl;
 }
 else{
     cout<<"unbalanced"<<endl;
 }

}