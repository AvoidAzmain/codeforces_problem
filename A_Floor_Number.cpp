#include<bits/stdc++.h>
using namespace std;
int ceil2(int a, int b) {
    return (a + b - 1) / b;
}

int main()
{
    int n; cin>>n;
    while (n--)
    {
        double a,x;
        cin>>a>>x;
        
        if(a<=2){
            cout<<"1"<<endl;
        }
        else{
            cout<< ceil2(a-2,x)+1<<endl;
        }
        
        /* code */
    }
    
    return 0;
}