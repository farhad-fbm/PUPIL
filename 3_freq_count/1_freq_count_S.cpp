#include <bits/stdc++.h>
using namespace std;

int main() {
  string s = "farhad binMomion";
  int n = s.length();


  int freq[256]={0};
  for(int i=0; i<n; i++) 
    freq[(int)s[i]]++;
  

  // output
  for(int i=0; i<256; i++){
    if(freq[i] > 0 && (char)i !=' '){
      cout<<(char)i <<":"<<freq[i]<<endl;
    }
  }


  return 0;
}