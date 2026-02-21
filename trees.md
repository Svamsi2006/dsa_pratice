### Insert in a tree binary tree

```
#include <iostream>
#include<queue>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
Node* insert(Node* root,int data){
    if(root==NULL){
        return new Node(data);
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        
        Node* temp=q.front();
        q.pop();
        
        if(temp->left==NULL){
            temp->left=new Node(data);
            return root;
        }
        else{
            q.push(temp->left);
            
        }
        
        if(temp->right==NULL){
            temp->right=new Node(data);
            return root;
        }
        else{
            q.push(temp->right);
        }
    }
    return root;
}
int main()
{
    Node* hi=NULL;
    
    hi=insert(hi,5);
     hi=insert(hi,4);
      hi=insert(hi,1);
    cout<<hi->data<<" "; 
    cout<<hi->left->data<<" ";
    cout<<hi->right->data<<" "; 
    return 0;
}
```

### print element  

```
void printt(Node* root){
    if (!root) return;
    
   
    printt(root->left);
    cout<<root->data<<" -> ";
    printt(root->right);
}
```



