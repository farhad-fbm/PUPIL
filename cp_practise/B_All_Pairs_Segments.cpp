#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while(t--){
        ll n, q; cin>>n>>q;

        vector<ll> p(n);
        for(ll i=0; i<n; i++) cin>>p[i];

        vector<ll> qu(q);
        for(ll i=0; i<q; i++)cin>>qu[i];


        vector<pair<ll, ll>> seg;
        for(ll i=0; i<n-1; i++){
            for(ll j=i+1; j<n; j++){
                seg.push_back({ p[i],p[j] });
            }
        }
        // for(auto s : seg)cout<<s.first<<','<<s.second<<endl;


        vector <pair<ll, ll>> count;
        for(ll i=p[0]; i<=p[n-1]; i++){
            ll x=0;
            for(auto s : seg){
                if(i>=s.first && i<=s.second) x++;
            }
            count.push_back({ i,x });
        }
        // for(auto ct : count)cout<<ct.first<<','<<ct.second<<endl;


        // vector<ll> cq(q, 0);
        // for(ll i=0; i<q; i++){
        //     ll x=0;
        //     for(auto c : count){
        //         if(qu[i] == c.second) x++;
        //     }
        //     cq[i]=x;
        // }
        // for(auto r : cq) cout<<r<<" ";
        // cout<<endl;

    }
    return 0;
}
