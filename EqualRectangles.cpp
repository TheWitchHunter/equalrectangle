#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll t,n,x;
    cin>>t;
    for(ll i=0;i<t;i++){
        cin>>n;
        vector<ll>v;
        for(ll j=0;j<4*n;j++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        vector<ll>arr;
        ll priv=0;
        ll end=4*n-1;
        ll count=0;
        ll ans=v[priv]*v[end];
        while(priv<end){
            if((v[priv]==v[priv+1]) && (v[end]==v[end-1]) && (v[priv]*v[end]==ans)){
                count+=1;
                
            }
            priv+=2;
            end-=2;
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;

}