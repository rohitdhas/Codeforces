#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int len;
    cin >> len;
    int arr[len];
    int max=INT_MIN, min=INT_MAX;
    int maxIdx, minIdx;
    int count = 0;
    
    for (int x=0; x<len; x++) {
      cin >> arr[x];
      
      if (arr[x] > max) {
        max = arr[x];
        maxIdx = x;
      }
      
      if (arr[x] <= min) {
        min = arr[x];
        minIdx = x;
      }
    }
    
    if (maxIdx == minIdx) {
      count = 0;
    }else {
      if (maxIdx > minIdx) {
        count += maxIdx-1;
        count += len - (minIdx+1);
      }else {
        count += maxIdx;
        count += len - (minIdx+1);
      }
    }
    
    cout << count;
    return 0;
}