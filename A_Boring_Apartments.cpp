#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t; 
   
    while(t--){
        int a; cin>>a;
        int rem = a%10;
        int cnt =0;
        int A=a;
        while(A>0){
            A/=10;
            cnt++;
        }
        if(cnt == 4){
            cout<<rem*10<<endl;
        }
          if(cnt == 1) cout<< rem*10-9<<endl;
          if(cnt == 2) cout<< rem*10-7<<endl;
          if(cnt== 3) cout<< rem*10-4<<endl;
       
        // if(a/4){
        //     cout<< (a/4)*10<<endl;
        // }
        // else {
        //     int rem = a%4;
        //     int add = (a/4)*10;
        //     if(rem == 1) cout<< add +1<<endl;
        //     if(rem == 2) cout<< add +1<<endl;
        //     if(rem == 1) cout<< add +1<<endl;
            

        
    }
    return 0;
}