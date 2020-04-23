#include<bits/stdc++.h>

using namespace std;

struct node{

 int data;

 struct node *next;
}*head,*tail ;

class node_reverse 
{

    public:

    void add_node(int n){

            if(head ==NULL){

               node *temp =new node ;
                temp ->data =n ;
                temp ->next =NULL;
                head =temp;
                tail =temp;
                cout<<"node added  ";
            }else{
                node *temp =new node ;
                node *temp1 =head ;
                temp ->data =n ;
                temp ->next =NULL;
                while ( temp1->next != NULL )
                {
                    temp1 = temp1->next;
                }
                temp1->next =temp;
                tail =temp;
            cout<<"node added  ";
            }

        }

        void retrive_node(){
           
           struct node *temp = head ;
          // cout<<endl<<temp->data;
            while ( temp !=NULL )
            {
                cout<<temp->data<<"   ";
                temp = temp->next;
            }
            
        }

    void reverse(){

             struct node *temp = head ;
             struct node *p = temp->next ;
             struct node *q = p->next ;
         // cout<<endl<<temp->data;
            while ( q )
            {
                p->next = temp;
                // cout<<endl<<"node rev"<<temp->data;
                temp = p;
                p=q;
                q=q->next;
            }
            p->next = temp;
            head->next = NULL;
            head = p;
 //cout<<endl<<temp->data;
    }
};

int main()
{
     node_reverse a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.add_node(4);
    a.add_node(5);
    a.add_node(6);
    a.retrive_node();
    a.reverse();
    a.retrive_node();

    return 0;
}