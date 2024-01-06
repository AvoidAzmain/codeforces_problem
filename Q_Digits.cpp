#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t; cin>>t;
        for(int i=0; i<t; i++) {
            // long long x;
            // cin>>x;
            
            //  while(x!=0){
            //     int temp = x%10;
                  
            //     cout<<temp<<" ";
            //       x/= 10;
    
            //  }
            string s;
            cin>>s;
            int len = s.size();
            for(int i=len-1; i>=0; i--) {
                cout<<s[i]<<" ";
            }
              cout<<endl;

        }
        
        // long long ar[t];

        // for(long long i=0 ;i<t ; i++){
        //    cin>>ar[i];
        // }
           
           
        // for(long long i=0; i<t ;i++){ 
               
        //       long long x =ar[i];
               
        //     while(x!=0){
        //         int temp = x%10;
                  
        //         cout<<temp<<" ";
        //           x/= 10;
    
                   
        //       }
        //       cout<<endl;

        // }








    return 0;
}