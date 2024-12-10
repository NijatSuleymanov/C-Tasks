#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    system("cls");
  
    
    const int  n = 7;
    int matrix [n][n] = {0};   

    

    int left = 0 , right = n-1 , top = 0 , bottom = n - 1, step = n*n ;
     while (left <= right && top <= bottom)
     {
       for (int i = right; i >= left; i--)
       {
         matrix[top][i] = step--;
       }
       top++;
       for (int  i = top; i <= bottom; i++)
       {
         matrix[i][left] = step--;
       }
       left++;
       if (top <= bottom)
       {
         for (int i = left; i <= right; i++)
         {
          matrix[bottom][i] = step--;
         }
         bottom--;
       }
          if (left <= right)
       {
         for (int i = bottom; i >= top; i--)
         {
          matrix[i][right] = step--;
         }
         right--;
       }
     }
   for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}