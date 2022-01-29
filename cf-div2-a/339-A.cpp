#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string sum = "";
    cin >> sum;
    
    if (sum.size() == 1) {
     cout << sum;
     return 0;
    }
    
    vector<char> res;
    
    for (int x=0; x<sum.size(); x++) {
      if (x%2==0) {
        res.push_back(sum[x]);
      } 
    }
    
    sort(res.begin(), res.end());
    
    for (int x=0; x<res.size(); x++) {
      if (x == res.size()-1) {
        cout << res[x];
      }else {
        cout << res[x] << "+";
      }
    }
    
    return 0;
}