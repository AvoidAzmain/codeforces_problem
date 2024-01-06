#include<bits/stdc++.h>
using namespace std;
void ss(int ar[],int n)
 {

int i ,j;
    for(i=0 ; i<n ; i++)
{ 
   int min = i;

    for(j=i+1 ; j<n ; j++ )

      {
         if(ar[j] < ar[min])

             
            min=j;
      }

        swap(ar[min],ar[i]);
}








}









int main()

{
    int n;
 cin>>n;
 int ar[n];
  

  for(int i=0;i<n;i++)
  {
     
     cin>>ar[i];

  }


    ss(ar,n);



  for(int i=0;i<n;i++)
  {
     
     cout<<ar[i]<<endl;

  }
return 0;
}

