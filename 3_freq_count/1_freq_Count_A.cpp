#include <bits/stdc++.h>
using namespace std;

int main() {
  int n=8;
  int ar[8] =  { 1, 2, 2, 3, 4, 4, 4, 5 };

  bool visited[n];
  for(int i=0; i<n; i++) visited[i]=false;

  for(int i=0; i<n; i++){
    if(visited[i]==true) continue;

    int cnt=1;
    for(int j=i+1; j<n; j++){
      if(ar[i] == ar[j]){ visited[j] =true; cnt++; }
    }

    cout<<ar[i]<< " : " <<cnt<<endl;
  }
  return 0;
}