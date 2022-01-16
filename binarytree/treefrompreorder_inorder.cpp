#include<iostream>
using namespace std;
struct node
{
 int data;
 node *left;
 node *right;
  node(int val)
  {
      data=val;
      left=NULL;
      right=NULL;

  }
};
int search(int inorder[],int start,int end,int current)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==current)
        {
            return i;
        }
    }
    return -1;
}
node *buildtree(int preorder[],int inorder[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
   static  int index=0;
   int current=preorder[index];
    index++;
    node* box=new node(current);
    if(start==end)
    {
        return box;
    }
    int pos =search(inorder,start,end,current);
   box->left= buildtree(preorder,inorder,start,pos-1);
   box->right= buildtree(preorder,inorder,pos+1,end);
   return box;

}
void printtree(node *root)
{
    if(root==NULL)
    {
        return;
    }
    printtree(root->left);
    cout<<root->data<<" ";
    printtree(root->right);
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node *root=buildtree(preorder,inorder,0,4);
    printtree(root);

}