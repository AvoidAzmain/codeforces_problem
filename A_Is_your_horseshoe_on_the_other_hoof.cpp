#include<bits/stdc++.h>
using namespace std;
int main()
{  
     int a[4];
   for(int i=0 ; i<4 ; i++){
    cin>>a[i];
   }

       map<int,int >m;
           
    map<int,int>::iterator it; 


     for(int i=0; i<4 ; i++ ){
         
             m[a[i]]++;


        }

          int cnt=0;
     for(it = m.begin() ; it!=m.end() ; it++){
        
       cnt++;
    }

    
        cout<<4-cnt<<endl;
       


    return 0;
}