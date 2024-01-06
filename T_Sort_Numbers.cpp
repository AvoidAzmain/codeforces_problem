#include<bits/stdc++.h>
using namespace std;
int sls(int ar[])
{
  int i,j,minimum;
  for(i=0;i<3;i++)
  {
      minimum=i;
      for(j=i+1;j<3;j++)
      {
          if(ar[j]<ar[minimum])
                {minimum=j;}

          }


      if(ar[minimum]!=ar[i])
      {
          swap(ar[i],ar[minimum]);

      }

  }

}




void bs(int a[])
{
    sls(a);
     for(int i=0;i<3;i++)
{
    cout<<a[i]<<endl;
}

    
}
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
{
    cin>>a[i];
}


  for(int i=0;i<3;i++)
{
    b[i]=a[i];
}

   bs(a);

cout<<"\n";

  for (int i=0;i<3;i++)
{
    cout<<b[i]<<endl;
}








}