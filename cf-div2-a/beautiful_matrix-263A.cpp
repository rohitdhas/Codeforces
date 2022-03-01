#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int oneX, oneY, moves = 0;
    int arr[5][5];
    
    for (int x=0;x<5;x++) {
      for (int y=0;y<5;y++) {
        cin >> arr[x][y];
        if (arr[x][y] == 1) {
          oneX = x;
          oneY = y;
        }
      }
    }
    
    // Y Axis
    while (oneX < 2) {
      oneX++;
      moves++;
    }
    
    while (oneX > 2) {
      oneX--;
      moves++;
    }
    
    // X Axis
    while (oneY < 2) {
      oneY++;
      moves++;
    }
    
    while (oneY > 2) {
      oneY--;
      moves++;
    }
     
    cout << moves;
    return 0;
}