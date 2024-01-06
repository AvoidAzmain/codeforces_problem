#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    int y;
  cout<<"enter the element"<<endl;
      cin>>y;

       
       for(int i=0;i<n;i++){
        
        if(ar[n]==y){
            return n;
        }
       

       }
       cout<<n<<endl;

}