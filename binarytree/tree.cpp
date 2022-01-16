#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
  node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return ;
    }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
node *search(node * root ,int key)            //// SEARCHING OF KEY /////
{
    if(root==NULL)
    {
      
        return NULL;
    }
    if(root->data==key)
    {
       return root;    
    }
    if(key>root->data)
    {
        return search(root->right,key);
    }
    else{
        return search(root->left,key);
    }
}
 

int main()
{
    struct node * root =new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(6);
    root->left->right =new node(8);
    preorder(root);
  if(search(root,9)==NULL)
  {
      cout<<"number not found";
  }
  else{
      cout<<"number found";
  }

}