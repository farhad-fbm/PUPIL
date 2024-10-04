#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int t; cin>>t;
  while(t--){
    ll n,k; cin>>n>>k;
    if(k==1){cout<<n<<endl;continue;}

    ll cnt = 0;
    while(n>=k){
      cnt++;
      ll p = 1;
      while(p*k <= n) p*=k;
      n -= p;
    }
    cout<<cnt+n<<endl;
  }
  return 0;
}
