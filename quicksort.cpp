#include<bits/stdc++.h>
using namespace std;
int partion(int a[],int low,int high)
{

   int i,j,pivot;
     pivot=   a[low];
      i = low;
       j = high;

  do
    {
    while(pivot>=a[i])
  {

     i++;

   }
    while(pivot<a[j])
    {

        j--;

    }

    if(i<j)
    {
        swap(a[j],a[i]);

    }


    }
    while(i<j);

  swap(a[j],a[low]);
  return j;



}



void quicksort(int a[],int low,int high)

{
/*int i,j;
i=low;
j=high;*/
int partitionindex;

 if(low<high)
{
partitionindex= partion(a,low,high);

quicksort(a,low,partitionindex-1);
quicksort(a,partitionindex+1,high);
}

}






int main()
{
    int i,n;
  cin>>n;
  int a[n];
     for(i=0;i<n;i++)
     {

         cin>>a[i];
     }



quicksort(a,0,n-1);

cout<<"after sorted:"<<endl;
     for(i=0;i<n;i++)
     {

         cout<<a[i]<<endl;
     }




}


