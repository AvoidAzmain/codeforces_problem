#include<bits/stdc++.h>
using namespace std;
class node{
   
   public:
     int data;
     node *next;
     node(int data)
     {
        this->data = data;
        this->next = NULL;
     }



};

   








 
        void insertathead(node * &head ,int data){





                node *temp = new node (data);

                 temp -> next = head;
                  
                  head = temp;



        }



            void insertatend(node* &head ,int data){

                        node* el = new node(data);

                        node *temp =head;

                while(temp->next!= NULL){


                         temp = temp->next ;

                          

                }
                 
                  temp->next= el;
            }












int main()

{
   node* element1 = new node(5);






}