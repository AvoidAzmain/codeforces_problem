#include<bits/stdc++.h>
using namespace std;


int traverse(vector<int>v){
 
}



int main()
{   int a,b; cin>>a>>b;


        for(int i=a ; i<=b ;i++){ 
               
                int x =i;
               vector<int>v;
            while(i!=0){
               int temp = i%10;
                   vector<int>v;
                      v.push_back(temp);
                          i /= 10;
    
                   
              }
               int cnt=1;
         for(int i=0; i<v.size() ; i++){
              
                 if(v[i]/4==1 || v[i]/7==1  ) cnt++;
         }

         if (cnt == v.size()) cout<< x << " ";
         else cout<<"-1";
              
    }

      
       






     
    return 0;
}