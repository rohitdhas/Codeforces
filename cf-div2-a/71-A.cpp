#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    for (int x=0;x<n;x++) {
        string word;
        cin >> word;
        int size = word.size();
        
        if (size > 10) {
          cout << word[0] << size - 2 << word[size - 1] << endl; 
        }else {
          cout << word << endl;
        }
    }
    
    return 0;
}