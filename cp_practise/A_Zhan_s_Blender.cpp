#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n, x,y;
        cin>>n>>x>>y;
        // cout<<static_cast<int>(ceil(static_cast<double>(n)/(min(x, y))))<<endl;
        cout << (n + min(x, y) - 1) / min(x, y) << endl;
    }
    return 0;
}