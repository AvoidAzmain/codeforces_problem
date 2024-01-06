#include<bits/stdc++.h>
using namespace std;
class node

{
    
public:
int data;
node* next;

    node (int data){

        this->data =  data;

        this->next = NULL;

    }

   
    
};

 
 void insertathead(node* &head , int data){
     
   node* temp = new node(data);

    temp->next =head;

       head = temp;

   
 }
    

void insertatend(node * &head, int data){

    node* element = new node(data);

     node* temp = head;

       while(temp->next != NULL){ 

      
         temp = temp->next;

}
      
      temp->next = element;


}


    void insertatpos(node* &head, int pos , int data){

        node* temp = head;
          
          int cnt = 1;
          while(cnt < pos-1){

            temp = temp->next;

            cnt++;
          }

          node* element = new node(data);

           
             element->next = temp->next;

              temp->next =  element;
           


    }









  void print (node * &head){

    node * temp = head;

      while ( temp != NULL){

             cout<<temp->data<<" "<<endl;
        
                    temp = temp->next;
       
   }

        cout<<endl;

  }

    void deletefromthefirst(node * &head){
       

       //node *temp = head;
       head = head->next;



    }









void deletatend(node * &head){

    

     node* temp = head;

       while(temp->next != NULL){ 

      
         temp = temp->next;

}
      
      temp = NULL;


}


int main()
{
     node *node1 = new node(10);

      
      
     node *node2 =new node(20);
        
         
          node1->next = node2;
        
         node * head = node1; 

         
         print(head);
          
          insertathead(head,12);

            print(head);

               insertatend(head,111);

                   print(head);
                      
                      insertatpos(head , 2, 444);

                       print(head);
                       deletefromthefirst(head);
                        print(head);
                        deletatend(head);
                        print(head);
        return 0;
}