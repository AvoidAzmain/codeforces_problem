#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    set<int>s;
     for(int i=1 ; i<=d ; i++ ){
       if(i%k == 0) s.insert(i);
         if(i%l == 0) s.insert(i);
          if(i%m == 0) s.insert(i);
            if(i%n == 0) s.insert(i);


     }
         set<int>:: iterator it;
         for(it =s.begin() ; it!=s.end() ; it++ ){
                cnt ++;
         }
         cout<<cnt<<endl;
    return 0;
}