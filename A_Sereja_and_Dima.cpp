#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v;
   vector<int>:: iterator it;

    for(int i=1; i<=n; i++){
        int a;
        cin>>a;
        v.push_back(a);

    }

    int sereja=0,dima=0;
    for(int i=1; i<=n; i++){
        if(i%2){
            if(v.begin() > v.end()) {
                it=v.begin();
                sereja =sereja+*it;
                v.erase(it);
                }

            else {
                it=v.end();
                sereja =sereja+*it;
                v.erase(it);
            }
        }

        else{
            if(v.begin() > v.end()) {
                it=v.begin();
                dima =dima+*it;
                v.erase(it);
                }

            else {
                it=v.end();
                dima =dima+*it;
                v.erase(it);
            }
        }
           
        
    }
    
        cout<<sereja<<" "<<dima<<endl;
    
    return 0;
}