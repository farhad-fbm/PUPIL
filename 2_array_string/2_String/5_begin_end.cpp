#include <bits/stdc++.h>
using namespace std;

int main() {
  string s ="far had";

  cout<<*s.begin()<<endl;
  cout<<*(s.end()-1)<<endl;

  for(auto i=s.begin(); i<s.end(); i++)
    cout << *i << ' ';
  return 0;
}