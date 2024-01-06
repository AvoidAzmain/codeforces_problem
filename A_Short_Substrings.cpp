#include<bits/stdc++.h>
using namespace std;
int main()
{  
      int n; cin>>n;
      int temp =n;
   while(temp--){
    string s; cin>>s;
    vector<string>a;
      //    for(int j=0 ; j<=s.size(); j+=2){
      //          string sub=s.substr(j,2);
      //          a.push_back(sub);
      //    }
      int j=0, cnt=0;
      while(cnt<=(s.size()/2)) {
            string sub = s.substr(j, 2);
            a.push_back(sub);
            j+=2;
            cnt++;
      }
         for(int k=0; k<a.size(); k++){
           if(a[k].back()==a[k+1].front()) cout<<a[k].front();
               else  cout<<a[k];
      //    cout<<a[k]<<" ";
         }
        cout<<endl;

     }
}