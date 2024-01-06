#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t; cin>>t; 
     while(t--){ 
           long long sum2=0;
        long long x,y; cin>>x>>y;
       
         if(x<y){
           for(long long i=x+1; i<y ; i++){
                
               if(i&1) sum2 = sum2+i;
        }

        }
       

          else{
        for(long long i=y+1; i<x ; i++){
              
               if(i&1) sum2 = sum2+i;
        }

        }

          cout<<sum2 << " "<< endl;



     }

 









    return 0;
}