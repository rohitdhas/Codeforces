#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str1;
    string str2;
    
    cin >> str1;
    cin >> str2;
    
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    if (str1 < str2) {
      cout << -1;
    }else if (str2 < str1) {
      cout << 1;
    }else {
      cout << 0;
    }
}