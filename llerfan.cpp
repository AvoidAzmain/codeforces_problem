#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node * next;
        Node(int d){
            value = d;
            next = NULL;
        }
};

class LinkedList{
    public:
        Node *head;
        LinkedList(){
            head = NULL;
        }

        void insertAtEnd(int d){
            Node *temp = new Node(d);
            if(head == NULL){
                head = temp;
                return;
            }

            Node *curr = head;
            while(curr->next !=NULL){
                curr = curr->next;
            }
            
            curr->next = temp;
        }

        void printNode(){
            Node *curr = head;

            while(curr!=NULL){
                cout<< curr->value << " ";
                curr = curr->next;
            }

            cout<<endl;

        }
};

int main()
{

    LinkedList ll;
    ll.insertAtEnd(5);
    ll.insertAtEnd(1);
    ll.printNode();
    
   // return 0;
}