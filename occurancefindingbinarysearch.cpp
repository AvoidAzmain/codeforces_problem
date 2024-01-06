#include<bits/stdc++.h>
using namespace std;
int sc(int ar[],int n,int key)
{
int s=0,e=n-1;
int ans = -1;
int mid= s + (e-s)/2;
while(s <= e)
{   
    if(ar[mid]==key)
    {
       ans=mid;
       e = mid - 1;
    }

   if(key>ar[mid])
   {
       s = mid + 1;
   }


    if(key<ar[mid]){
          e = mid - 1;
    }
   


       mid = s + (e-s)/2;

}

     return ans;


}



int lc(int ar[],int n,int key)
{
int s=0,e=n-1;
int ans = -1;
int mid= s + (e-s)/2;
while(s <= e)
{   
    if(ar[mid]==key)
    {
       ans=mid;
       s = mid + 1;
    }

   if(key>ar[mid])
   {
       s = mid + 1;
   }


    if(key<ar[mid]){
          e = mid - 1;
    }
   


       mid = s + (e-s)/2;

}

     return ans;
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

  int x;
  cout<<"enter the num you wanna find:"<<endl;
  cin>>x;
   
   cout<<"left most index:"<<sc(ar,n,x)<<endl;


cout<<"right most index:"<<lc(ar,n,x)<<endl;


}