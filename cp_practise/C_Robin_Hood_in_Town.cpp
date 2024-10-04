#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> arr(n);
        ll tot = 0;

        for(ll& x : arr){
            cin >> x;
            tot += x;
        }

        sort(arr.begin(), arr.end());

        if(n <= 2) cout << -1 << "\n";
        else{
            ll mid = arr[n / 2];
            ll want = 2*n*mid + 1;
            ll res = max(0LL, want - tot);
            cout << res << "\n";
        }
    }

    return 0;
}
