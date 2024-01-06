#include<bits/stdc++.h>
using namespace std;
class Stack{
public:

int *arr;
int top;
int size;


Stack(int size ){

this->size = size; 
arr = new int [size];
top = -1;
}

void push(int element ){

    if((size - top) > 1)    {

            top++;
             
               arr[top] = element;

    }

    
     else {

        cout << " stack overflow "<<endl;
     }


}


 void pop(){


    if (top >= 0){

           top--;
}
        else{
              cout<<" stack underflow "<<endl;


        }


 }



        int peak(){

                if(top>=0 )
                {
                        return arr[top];

                }

                         

                else {
                        cout<<" STACK IS EMPTY "<<endl;
                        return -1;
                }

        }




                bool isempty(){
                        if(top == -1){

                                return true;
                        }
                }


};




 





int main()
{

        Stack st (5);

        st.push(10);
        st.push(11);
        st.push(12);
        st.push(55);
        st.push(77);
        st.push(66);
         

}