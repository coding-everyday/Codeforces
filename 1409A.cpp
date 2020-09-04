#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a > b)
        {
            swap(a,b);
        }
        int ans = b-a;
        
        if(ans %10 ==0)
        {
            cout<<ans/10;
        }
        else{
            cout<<ans/10 + 1;
        }
        cout<<endl;
        
        
        
    }
}
