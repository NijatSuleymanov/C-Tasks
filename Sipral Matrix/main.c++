#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    system("cls");
  
    
    const int ROWS = 5, COLS = 6;
    int matrix [ROWS][COLS] = {0};   

    

    int left = 0 , right = COLS-1 , top = 0 , bottom = ROWS - 1, step = 1 ;
     while (left <= right && top <= bottom)
     {
       for (int i = left; i <= right; i++)
       {
         matrix[top][i] = step++;
       }
       top++;
       for (int  i = top; i <= bottom; i++)
       {
         matrix[i][right] = step++;
       }
       right--;
       if (top <= bottom)
       {
         for (int i = right; i >= left; i--)
         {
          matrix[bottom][i] = step++;
         }
         bottom--;
       }
          if (left <= right)
       {
         for (int i = bottom; i >= top; i--)
         {
          matrix[i][left] = step++;
         }
         left++;
       }
     }
   for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
