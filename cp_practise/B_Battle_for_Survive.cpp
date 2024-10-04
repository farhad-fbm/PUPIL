#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        ll slv=v[n-2];
        for(int i=n-3; i>=0; i--)slv -=v[i];
        cout<<v[n-1]-slv<<endl;
    }
    return 0;
}
