#include <iostream>
using namespace std;

int main() 
{
    string str;
    string res="";
    cin >> str;
    
    for (int x=0;x<str.size(); x++) {
      char chr = str[x];
      
      if (isupper(chr)) {
        chr = tolower(chr);
      }
      
      if (chr != 'a' && chr != 'e' && chr != 'i' && chr != 'o' && chr != 'u' && chr != 'y') {
        res += ".";
        res += chr;
      }
    }
    cout << res;
    return 0;
}