#include<iostream>
#include<queue>
using namespace std;

struct node{
    struct node *left;
    struct node *right;
    int  data;

};
class bst{

public:
struct node *pre1 ;
   struct node  *AddElement(struct node *root,int data){
      
      struct node *NewNode  = new node;

      if(root == NULL){
        cout<<"null";

        return root;
        
      }else{
      NewNode ->right = NULL;
      NewNode ->left  = NULL;
      NewNode->data = data;
      cout<<NewNode->data;
      cout<<root->data;
     
      }
      if(NewNode->data > root->data){

        if(root->right == NULL){
            root->right = NewNode ;
            cout<<"node added right \n";
        }else{
          
            root = AddElement(root->right,data);
        }  

    }else if(NewNode->data < root->data ){

        if(root->left == NULL){
            root->left = NewNode ;

            cout<<" node added left \n";

        }else{
            root = AddElement(root->left,data);
        } 
    }else{
      cout<<"other cond.....";
      return root;
    }

}
   void InOrder(struct node *root){

     if(root){
       
      InOrder(root->left);
      cout<<root->data<<"    ";
      InOrder(root->right);
     }
   }
  struct node *max_element(struct node* root){

    if(root->right){
      max_element(root->right);
    }else{
      return root;
    }
  }

   struct node *DeleteNode(struct node *root ,int del_element){

     struct node *temp;
     
     if(!root){
       cout<<"no element exisit in tree";

     }else if(del_element < root->data)
        {
          root->left = DeleteNode(root->left,del_element);
        }else if (del_element > root->data)
        {
          root->right = DeleteNode(root->right,del_element);
        }else{
          if(root->right && root->left){
              temp =max_element(root->left);
              root->data = temp->data;
              root->left = DeleteNode(root->left,root->data);
          }else
          {
            temp =root;
            if(!root->left && !root->right){
              free(temp);
              return NULL;
            }
            if(!root->left && root->right ){
              root = root->right;
              
            }
            
            if(root->right && root->left){

              root = root->left;
            }

            free(temp);
          }
        }
        cout<<"delete fun return";
    return root;
  }

  int heigth(node *root){
    int hleft,hrigth;
       
    if(!root) {
      return 0;
    }else{
      hleft=heigth(root->left);
        
      hrigth=heigth(root->right);
      
      
      if(hleft > hrigth){
        return hleft+1;
      }else{
        return hrigth+1;
      }
    }
  }

  int bfsSearch(node *root){
  if(!root){
    return 0;
  }
int x1=0;
  queue <node *> q;
  q.push(root);

  while(!q.empty()){
    int size = q.size();

    x1=x1+1;
    while(size--){

        if(q.front()->left){
          q.push(q.front()->left);

        }
        
        if(q.front()->right){
          q.push(q.front()->right);
        }

      q.pop();
      }

    }
    return x1;
  }
};



int main()
{
  bst binary ;
    // cout<< root;
   struct node *root =new node;

    cout<< root<<endl;
    cout<<"start ";
      root->data =10;
      root->right =NULL;
      root->left = NULL;
    cout<<root->data<<endl<<"right";
    cout<<root->right<<endl;
    cout<<root->left;

    binary.AddElement(root,3);
    binary.AddElement(root,33);
    binary.AddElement(root,30);
    binary.AddElement(root,20);
    binary.AddElement(root,60);
    binary.AddElement(root,90);
    
    cout<<"inorder ";
  binary.InOrder(root);
    cout<<endl<<" heigth "<<binary.heigth(root)<<endl;

  cout<<" bfs "<<binary.bfsSearch(root)<<endl;

  cout<<"max_element"<<binary.max_element(root)->data<<endl;
  
cout<<"inorder ";binary.InOrder(root);
 binary.DeleteNode(root,20)->data;
 cout<<endl<<"element 20 deleted"<<endl;
  cout<<"inorder ";binary.InOrder(root);
    return 0;
}