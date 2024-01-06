#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n; 
    while(n--){
        int a,b; cin>>a>>b;
        if(a==b) cout<<"0"<<endl;


        else if(b>a){
            if((b-a)%2!=0) cout<<"1"<<endl;
            else cout<<"2"<<endl;


        }
        else{
            if((a-b)%2==0) cout<<"1"<<endl;
            else cout<<"2"<<endl;
            

        }


    }
    return 0;
}