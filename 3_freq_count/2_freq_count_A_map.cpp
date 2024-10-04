#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ar =  { 1, 2, 2, 3, 4, 4, 4, 5 };

  // map<int, int> freqMap;           
  unordered_map<int, int> freqMap; 
  for(int n : ar) freqMap[n]++;

  for(auto pr : freqMap) 
    cout<<pr.first << " "<<pr.second<<endl;
  return 0;
}