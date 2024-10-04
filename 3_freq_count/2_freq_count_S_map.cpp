#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "Farhad BinMomin";
  int n= s.length();

  unordered_map<char, int> freq;
  for(int i=0; i<n; i++)
    freq[s[i]]++;


  for(auto pr : freq){
    if(pr.first ==' ') continue;
    cout<<pr.first<<":"<<pr.second<<endl;
  }
    
  return 0;
}