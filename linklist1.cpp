#include<bits/stdc++.h>
using namespace std;

 struct node{  
    int data;
    struct node * next;

};



void traversal(struct node *ptr){

  while(ptr != NULL){

   cout<<ptr->data<<" " ;
   ptr = ptr->next;
  } 
  cout<<endl;
     
}


     int main() {
      struct node * first;
      struct node * second;
      struct node * third; 
     
     first = (struct node * )malloc(sizeof(struct node ));
     
     second = (struct node * )malloc(sizeof(struct node ));
        
     third =  (struct node * )malloc(sizeof(struct node ));

  
     
    //first node
     first->data = 5;
     first->next = second;
      

     //second node
     second->data = 7;
     second->next = third;
     

     //third node
     third->data = 9;
     third->next = NULL;
      cout<<"traversal:";
          traversal(first);

        
     //insert at top
     struct node * newnode;
     newnode = (struct node * ) malloc(sizeof(struct node));
      newnode->data = 1;
      newnode->next = first ;
      first = newnode;
       cout<<"insert at top:";

       traversal(newnode);


      //insert at end
       struct node *  lastnode;
       lastnode = (struct node * ) malloc(sizeof(struct node));
        lastnode->data = 10;
         lastnode ->next = NULL;  

        struct node *temp = first;
           while(temp->next != NULL)
           {
            temp = temp->next;
           } 
           temp->next=lastnode;
            cout<<"insert at end:";
         traversal(newnode);
           
         //delete from the begening 

           newnode = newnode->next;
            cout<<"delete from the begening:";
         traversal(newnode);


          //delete from the end
           struct node * temp1 =first;
           while(temp1 ->next->next!=NULL){
            temp1 = temp1->next;
           }
            temp1->next= NULL;
          cout<<"delete from the end:";
              traversal(first);
              
            return 0;

  
  }