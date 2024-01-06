#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
   
    while(n--){
        int a;  cin>>a;
        
         vector<int>v;
        int cnt =0;

        while(a>0)  { 
          
           if(a%10){
            
             v.push_back(ceil((a%10)*pow(10,cnt)));
                  
        } 
        a/=10;
        cnt++; 
        }
        
       
       cout<<v.size()<<endl;

        for(int j=0; j< v.size(); j++){
            cout<< v[j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}