#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        
        ll l,r;
        cin>>l>>r;
        
        ll ans=0;

        if(2*l>r){
            cout<<r%l<<"\n";
            continue;
        }
        else 
        {
         cout<<(r-1)/2<<"\n";
        }
        
        
        
    }
    return 0;
}
