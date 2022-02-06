#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    vector<int> luckeyNums = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777, 774};
    
    for (int x=0; x<luckeyNums.size(); x++) {
      if (num % luckeyNums[x] == 0) {
        cout << "YES";
        return 0;
      }
    }
    
    cout << "NO";
    return 0;
}