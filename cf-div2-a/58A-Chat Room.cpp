#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str;
    int len;
    cin >> str;
    len = str.size();
    int correctCount = 0;
    string temp = "hello";
    
    for (int x=0, y=0;x<len; x++) {
      if (str[x] == temp[y]) {
        correctCount++;
        y++;
      }
    }
    
    if (correctCount == 5) {
      cout << "YES";
    }else {
      cout << "NO";
    }
    
    return 0;
}