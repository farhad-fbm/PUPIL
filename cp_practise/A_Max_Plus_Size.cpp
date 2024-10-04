#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int c1=0;
        int mx1=0;
        int c2=0;
        int mx2=0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(i%2 !=0){
                c1 +=1;
                mx1 = max(mx1,x);
            }
            else{
                c2 +=1;
                mx2 = max(mx2, x);
            }
        }
        cout<< max(c1+mx1,c2+mx2 )<<endl;
    }
    return 0;
}