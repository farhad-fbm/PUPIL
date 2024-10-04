#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int p=0;
        int g=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(x>=k) g+=x;
            if(x==0){
                if(g){
                    p+=1;
                    g-=1;
                }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}