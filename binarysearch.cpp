#include<bits/stdc++.h>
using namespace std;
int bns(int ar[],int x)
{


   int mid,left=0,right=9;


   while(left<=right)
   {

   {
       mid=(left+right)/2;
   }



    if(ar[mid]==x)
    {
        return mid;
    }



    if(ar[mid]<x)

         left=mid+1;
    else
        right=mid-1;


   }
 
    return -1;
}




int main()
{

int ar[10]={1,2,3,4,5,6,7,8,9,10};
int x,y;
cin>>x;
cout<<bns(ar,x);



}
