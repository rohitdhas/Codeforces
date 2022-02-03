#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int coins;
    cin >> coins;
    int arr[coins];
    int total = 0;
    int minCoins = 0;
    
    for (int x=0; x<coins; x++) {
      cin >> arr[x];  
      total += arr[x];
    }
    
     sort(arr, (arr + coins), greater<int>());
     
     int temp = 0;
     for (int x=0;x<coins; x++) {
       temp+= arr[x];
       minCoins++;
       if (temp > (total - temp)) {
         cout << minCoins;
         return 0;
       }
     }
    cout << minCoins;
    return 0;
}