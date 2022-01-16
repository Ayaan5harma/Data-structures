#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
struct Node{
    int key;
    Node *right,*left;

};
Node *insert(int key){
  Node *newnode= new Node;
  newnode->key=key;
  newnode->left=newnode->right=NULL;
  return newnode;
}

void getverticalorder(Node * root,int horizontalidx ,map<int,vector<int>> & mp){

    if(root==NULL){
        return;
    }
    mp[horizontalidx].push_back(root->key);
    getverticalorder(root->left,horizontalidx-1,mp);
    getverticalorder(root->right,horizontalidx+1,mp);

}

int main(){
Node *root=insert(10);
root->left=insert(7);
root->left=insert(4);
root->left->left=insert(3);
root->left->right=insert(11);
root->right->left=insert(14);
root->right->right=insert(6);

map<int,vector<int>> mp;
int Horizontal_idx=0;

getverticalorder(root,Horizontal_idx,mp);

map<int,vector<int>> :: iterator it;
// two loops because
 //let say verticalindex =0,
 //then uske vector me jitne element store hh unhe print krao
for(it=mp.begin();it!=mp.end();it++){           
                                                 
    for(int i=0;i<(it->second).size();i++){    
       cout<<(it->second)[i]<<" ";

    }
    cout<<endl;
}



}