#include<bits/stdc++.h>
using namespace std;

int main()
{       
     long long m,n ; 
        while( cin>>m>>n && m>0 && n>0){
             long long sum = 0;
          
                if(m>n ){
                   
                    for(long long i=n; i<=m ; i++){
                         cout<<i<<" ";
                           sum=sum+i;
                    } cout << "sum ="<< sum << endl;
                }

                 else{
                   
                    for(long long i=m; i<=n ; i++){
                         cout<<i<<" ";
                           sum=sum+i;
                    } cout << "sum ="<< sum << endl;
                }


                    

                 
        }
    
}