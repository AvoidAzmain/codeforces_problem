#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int down,up,key=0,big=0;
    for(int i=1 ; i<=n ; i++){
        cin>>down>>up;
            key=key+up-down;
              
                if(key>big) big =key;
                  
               

    }
             cout<<big<<endl;
     
    return 0;
}