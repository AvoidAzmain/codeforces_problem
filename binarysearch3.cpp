#include<bits/stdc++.h>
using namespace std;
int binarysearch(int ar[],int x){

      
       int mid,left=0 , right =4;
        

       while(left  <= right){
            
            mid = (left+right)/2;

            if(ar[mid] == x){
                return mid;

            }
        

           if(ar[mid] > x){

           right = mid - 1;

           }
    
                if(ar[mid] < x){

                     left = mid + 1;

           }
           
               return -1;

       }
         




}
 






int main()
{

   int ar[5] = {1,2,3,4,5},x;
      
       cout<<"enter a num :"<<endl;
      cin>>x;
      cout<<binarysearch(ar,x);


    return 0;
}