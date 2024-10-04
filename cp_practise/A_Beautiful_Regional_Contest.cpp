#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        vector<int> p(n);
        for(auto& x : p) cin >> x;
        int g = 0, s = 0, b = 0, cur = 0, cur_b = 0;
        for(int i = 0, j = 0, k = 0; i < n; i = j){
            while(j < n && p[i] == p[j]) ++j;
            cur += j - i;
            if(k == 0){
                g = j - i;
                ++k;
            }
            else if(k == 1){
                s += j - i;
                if(g < s) ++k;
            }
            else{
                cur_b += j - i;
                if(2 * cur <= n && g < cur_b) b = cur_b;
            }
        }
        if(b == 0) cout << "0 0 0\n";
        else cout << g << ' ' << s << ' ' << b << '\n';
    }
    return 0;
}