#include<bits/stdc++.h>
using namespace std;

void print(int ar[],int n){

    
    for(int i =0 ; i< n ; i++){

           cout<<ar[i]<<" ";

           }




}

 
 void bubblesort(int ar[],int n){
   
   int i ,j;
   
    for(i = 0 ; i<n-1 ; i++){


            for(j =0 ; j<n-1-i; j++){

                        if(  ar[j] >  ar[j+1] ){
                            
                            swap( ar[j+1] , ar[j]);
                        }







            }





    }






 }


int main()
{

   int n;
        
        cout<<"enter sz of array"<<endl;
        cin>>n;

                   cout<<"enter  array"<<endl;
           int ar[n]; 

           for(int i =0 ; i< n ; i++){

            cin>>ar[i];

           }

        bubblesort(ar,n);

                print(ar,n);


    return 0;
}