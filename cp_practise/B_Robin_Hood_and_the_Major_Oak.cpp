#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long start_year = n - k + 1;


        // long long odd_count = 0;
        // for(long long i = start_year; i <= n; i++){
        //     if(i % 2 == 1)odd_count++;
        // }

        long long odd_count = (n + 1) / 2 - start_year / 2;
        if(odd_count % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
