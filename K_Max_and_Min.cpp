#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[3],max,min;
int i;
for(i=0;i<3;i++)
{
    cin>>a[i];
}
   min=a[0];
for(i=0;i<3;i++)
{
  if( min>=a[i])
  {   
       min=a[i];
  }
 
}



 max=a[0];
for(i=0;i<3;i++)
{
  if( max<=a[i])
  {   
       max=a[i];
  }
  
}

cout<<min<<" "<<max<<endl;



}