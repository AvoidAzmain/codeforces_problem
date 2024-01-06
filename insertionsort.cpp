#include <iostream>

using namespace std;
void search(int a[],int n,int num)
{ int count=0;
    for(int i=0;i<n;i++)
   {
       
      if(a[i]==num)
      count++;
       
   } 
    
    if(count==1)
    cout<<"found";
    else
    cout<<"not found";
    
    
}



void display(int a[],int n)
{
    
   for(int i=0;i<n;i++)
   {
       
       cout<<a[i]<<endl;
       
   } cout<<endl;
    
}
 
 
 
int s (int a[],int size,int e,int capacity,int index)

{
    if(size>=capacity)
{
    return -1;
} 

 for(int i=size-1 ; i>=index ; i--)  
 {
     
     a[i+1]=a[i];
 }
    
    a[index]=e;
    return 1;
    
}




int main ()
 {
     
     
     int a[100],size;
     cout<<"enter size";
     cin>>size;
     cout<<"enter elements:"<<endl;
     for(int i=0;i<size;i++)
     {
         cin>>a[i];
     }
     display(a,size);
     int element,index;
     cout<<"enter a element";
     cin>>element;
     cout<<"enter a index";
     cin>>index;
     s(a,size,element,100,index);
     size+=1;
     cout<<"after insertion"<<endl;
     display(a,size);
     
      int num;
      cout<<"enter a number that you wanna search"<<endl;
      cin>>num;
    search(a,size,num)  ;
     
     
     
     
     
 }
