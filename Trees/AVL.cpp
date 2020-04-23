#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
    int height;
}*root;

class AVL
{
private:
    /* data */
public:
    
node * addElement(node *root,int data){
    if(root == NULL){
    cout<<"element added";
    root = new node;
    root ->right = NULL;
    root ->left  = NULL;
    root->data = data;
    root->height =0 ;
    // cout<<root->data;
    }  
    else if(data < root->data){

        root->left = addElement(root->left,data);
        if(abs(heigth(root->left)-heigth(root->right))==2){
            if(data < root->left->data){
                root = singleRotationleft(root);
            }else{
                root =doubleRotationleft(root);
            }
        }

    }
    else if (data > root->data)
    {
        root->right = addElement(root->right,data);
        if (heigth(root->right)-heigth(root->left)==2){
           if (data >root->right->data){
              root= singleRotationRigth(root);
           }
           else{
              root = doubleRotationRigth(root);
           }   
        }
    }
    
    root->height = max(heigth(root->left),heigth(root->right));
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

node *singleRotationleft(node *x){
    node *w = x->left;
    x->left = w->right;
    w->right = x;
    w->height =max(heigth(w->left),heigth(w->right));
    x->height =max(heigth(x->left),heigth(x->right));
    return w;
}
node *singleRotationRigth(node *x){
    node *w = x->right;
    x->right = w->left;
    w->left = x;
    w->height =max(heigth(w->left),heigth(w->right));
    x->height =max(heigth(x->left),heigth(x->right));
    return w;
}
node *doubleRotationleft(node *z){
    z->left = singleRotationRigth(z->left);
    return singleRotationleft(z);
}
node *doubleRotationRigth(node *z){
    z->right = singleRotationleft(z->right);
    return singleRotationRigth(z);
}
void InOrder(struct node *root){
    if(root){
        InOrder(root->left);
        cout<<root->data<<"    ";
        InOrder(root->right);
    }
}
};


int main(){

    AVL avl = AVL();
    root = avl.addElement(root,4);
    root = avl.addElement(root,2);
    root = avl.addElement(root,7);
    root = avl.addElement(root,3);
    root = avl.addElement(root,6);
    root = avl.addElement(root,5);
    // root = avl.addElement(root,14);
    // cout<<abs(avl.heigth(root->left)-avl.heigth(root->right));
    // cout<<abs(avl.heigth(root->right)-avl.heigth(root->left));
    cout<<root->height;
    cout<<endl;avl.InOrder(root);
    return 0;
}