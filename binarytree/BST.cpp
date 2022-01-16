#include<iostream>
using namespace std;

struct node {
    int data;
    node *left,*right;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
node *bst(node *root,int val)                  ////FORMING BINARY SEARCH TREE ////
{
  if(root==NULL)
  {
      return new node(val);
  }
if(val>root->data)
{
    root->right=bst(root->right,val);
}
else{
    root->left=bst(root->left,val);
}
return root;
}
int maxkey(node * root )                    //// FINDING MAXIMUM NUMBER ////
 {
    while(root->right!=NULL)
    {
       root=root->right;
    }
   return root->data;
 }

 int minkey(node * root )                    //// FINDING MINIMUM NUMBER ////
 {
    while(root->left!=NULL)
    {
       root=root->left;
    }
   return root->data;
 }
void preorder(node *  root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
node *inordersucc(node *root)
{
    node *curr=root;
    while(curr && curr->left !=NULL)
    {
        curr=curr->left;
    }
    return curr;
}

node *deletion(node *root ,int key)             /////DELETING THE LEAF NODE/////
{
  if(root==NULL)
  {
      return NULL;
  }
  if(root->data==key)
  {
     delete(root);
  }
  if(key > root->data)
  {
      root->right= deletion(root->right,key);
    
  }
 else if(key < root->data)
  {
      root->left= deletion(root->left,key);
  }
  else
  {   
      if(root->left==NULL)
      {
          node * temp =root->right;
          free(temp);
          return temp;
      }
     else if(root->right==NULL)
     {
         node * temp =root->left;
         free(temp);
         return temp;
     }

     node *temp=inordersucc(root->right);
     root->data=temp->data;
     root->right=deletion(root->right,temp->data);

  }
  return root;
}
int sumofLeafNodes(node *root ){
  
     int sum=0;
     if(root==NULL)
     {
         return 0 ;
     }
     else if(root->left==NULL && root->right==NULL)
     {
         return root->data;
     }
     else
     {
        return sum+=sumofLeafNodes(root->left)+sumofLeafNodes(root->right);
     }
     
    }

int main()
{
   node * root=NULL;
   root= bst(root,5);
   bst(root,2);
   bst (root ,5);
   bst (root,9);
   bst (root,6);
preorder(root);
cout<<endl<<maxkey(root)<<endl;
cout<<minkey(root)<<endl;
deletion(root ,2);
preorder(root);
cout<<sumofLeafNodes(root);


}





