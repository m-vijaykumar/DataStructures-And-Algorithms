#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next ;
}*head=NULL,*tail=NULL ;

class Linkedlist {

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

        void node_sort(){
           struct node  *temp= head;
           struct node  *temp1= head->next;

           while (temp->next !=NULL)
           {
               /* code */
               while (temp1 !=NULL)
               {
                   /* code */
                   if(temp->data < temp1->data){

                       if (temp == head)
                       {
                            temp->next =temp1->next;
                           temp1 ->next =head;
                           head = temp1;
                          
                           
                           cout<<"sorted head";
                           retrive_node();

                       }else{
                           
                           temp1 ->next =temp;
                           temp->next =temp1->next;
                           cout<<"sortded  ";
                           retrive_node();

                       }
                       

                   }

                   temp1 =temp1->next;
               }

               temp = temp->next;
               
           }
           


        }
    
};
int main()
{
    // if(head == NULL){


    // }
    // node *temp = new node ;
    // node *temp1 = new node ;
    // temp ->data = 2;
    // temp ->next = temp1 ;

    // cout<<temp ->data <<endl;
    // cout<<temp ->next << "   "<<temp1 ;

    Linkedlist a;
    a.add_node(1);
    a.add_node(2);
    a.add_node(3);
    a.retrive_node();
    a.node_sort();
    a.retrive_node();

    
    return 0;
}