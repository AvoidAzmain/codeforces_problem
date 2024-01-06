#include<bits/stdc++.h>
using namespace std;
int main()
{ int n,c1=0,c2=0,c3=0,c4=0;
   
    cin>>n;

     int ar[n];

for(int i=0 ; i<n ; i++){

      
      cin>>ar[i];


}

for(int i=0 ; i<n ; i++){

      
      if(ar[i]%2 ==0)
{
    c1++;
}
      
if( ar[i]%2 !=0 ){   c2++;    }

 if( ar[i]>0 ){   c3++;     }


if( ar[i]<0 ){   c4++;     }

}


cout<<"Even: "<<c1<<endl;


cout<<"Odd: "<<c2<<endl;

 
cout<<"Positive: "<<c3<<endl;

cout<<"Negative: "<<c4<<endl;

    return 0;
}